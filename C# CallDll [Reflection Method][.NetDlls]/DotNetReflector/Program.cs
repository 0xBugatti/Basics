using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Xml.Linq;
using System.Collections;






/*
What is Reflection
-------------------




is update for runtime (Dynamic) Dll Calling idea but with further suprior powerfull ideas make calling very dynamic process
if you need old way  you can use GetModuleHandel,GetProcAddress Functions from Kernel32.dll and do it 
Type is  General C# DataType Used To Create General Insance Can Be Casted [Enum|Struct|Class] 

Group of Type  Functions 
-------------------------
GetType() //Return The Main Data Type [Enum|Struct|Class] must store it in[Enum|Struct|Class] if you Know Returned DataType] or [General Type {called Type} if you dont Know Returned DataType]
Type t1 = instance.GetType();
Type t1 = Type.GetType("NameSpace.DataTypeName");
Type t1 = Type.GetType("File.dll");


GetMethod("MethodName")     //Retuen this Method stored in this main DataType [Enum|Struct|Class]
MethodInfo m = t1.GetMethod("MethodName");
//Get Error If Method OverLoaded


GetProperty("PropertyName") //Retuen this Property stored in this main DataType [Enum|Struct|Class]
pr = t1.GetProperty("PropertyName");



GetMethods()     //Retuen Array of Methods stored in this main DataType [Enum|Struct|Class]
MethodInfo[] mInfo = t1.GetMethods

GetProperties() //Retuen Array of Propertyies stored in this main DataType [Enum|Struct|Class]
PropertyInfo[] pInfo = t1.GetProperties();


Execute Functions

methods[11].Invoke( );



NOTES:
------
Dll Reflection
var dll = Assembly.LoadFile(@"Path\\\file.dll").
Type t = dll.GetType()

If You Have More Than 1 Type [Enum|Struct|Class] in Same Scope of Name Space 9Not Neasted) which Happens on DLLs
var t =  Assembly.LoadFile(@"Path\\\file.dll").GetTypes();
t will be Array of Types [Enum|Struct|Class] 


Group of Type  Variables
-------------------------
Name [TypeName]
t1.Name
Fullname [namespace.TypeName]
t1.Fullname
Namespace [Name Space Contains Type]
t1.Namespace
Assembly [Dll Contains Type]
t1.Assembly


///Type[] t3 = Type.GetTypeArray()
*/

namespace DotNetReflector
    {
        class Program
        {
            static void Main(string[] args)
            {
            Console.WriteLine("Modern RunTime Calling");
            Console.Write("\n\n===========++++++++++++++++============\n\n");


            //Assembly myassembly = Assembly.LoadFrom(@"C:\Users\Blu-Ray\source\testing\DotNetDLL\DotNetDLL\bin\Debug\DotNetDLL.dll");
            var dll = Assembly.LoadFrom(@"C:\Users\Blu-Ray\0xTest\0xOSEP\dlls\Full DotNET Implementation\C# dotNetDll Project-2\DotNetDLL\bin\Debug\DotNetDLL.dll");
            Module[] dlls = dll.GetLoadedModules(); 
            foreach (var d in dlls)
            {
                Console.WriteLine($"Loaded Dlls is {d}");
                Console.WriteLine($"Dll is GAC :{d.Assembly.GlobalAssemblyCache}");

            }
            Console.Write("\n\n===========++++++++++++++++============\n\n");

            //Load Single Type (Class) {Can Be Done Because This Dll Contain 1 Class}
            //Type type_Class = dll.GetType();
            //Type type_Class = dll.GetType("DotNetDLL.Class1");
            //Load And Handel Multiple Types (Classes)
            
            

            Type[] types = dll.GetTypes();

            /*If You Want to Reflect System Builtin Class
            Type T = typeof(System.UIntPtr); 
            Type t = Type.GetType("System.UIntPtr");*/

            foreach (var t in types)
            {
                if (t.IsClass) {
                    Console.WriteLine($"Loaded Classes is {t.Name}");
                    Console.WriteLine($"Loaded Classes Full Name is {t.FullName}");
                }
                }
            Console.Write("\n\n===========++++++++++++++++============\n\n");

            MethodInfo[] methods = types[0].GetMethods();
            Console.WriteLine($"Methods  exists in Loaded Class is {methods.Length} method\n");

            int i = 0;
            foreach (var m in methods)
            {
                if (m.IsStatic)
                {
                    Console.WriteLine($"{i} -{m} Found [Static]");
                    i++;
                }
                else
                {
                    Console.WriteLine($"{i} -{m} Found [Not Static]");
                    i++;
                }
            }
            Console.Write("\n\n===========++++++++++++++++============\n\n");

            PropertyInfo[] Properties = types[0].GetProperties();
            Console.WriteLine($"Properties  exists in Loaded Class is {Properties.Length} property");
            int i2 = 0;
            foreach (var property in Properties) { Console.WriteLine($"{i} -{property} Found");i2++; }


            Console.Write("\n\n===========++++++++++++++++============\n\n");


            //If Method is Static  can be Invoked With no Instances (Null as Instance paramter)
           methods[2].Invoke(null,null);
            //If Method is not Static or static can Invoked With  Instances
            //Args must be methods[2].Invoke(instance, new object[] {arg1,arg2}); or Null if Method dont take args

            object instance = Activator.CreateInstance(types[0]);
            methods[3].Invoke(instance, new object []{50});

            //return Value should be stored in Object and Can Be Casted then or ignore that

            Object ret = methods[0].Invoke(instance, new object[] { (UInt16)50 });
            Console.WriteLine($"Returned Value from IDouble is :{ret}");

            Console.WriteLine($"Returned Value from IDouble is :{(int)ret}");
            }
        }
    }

