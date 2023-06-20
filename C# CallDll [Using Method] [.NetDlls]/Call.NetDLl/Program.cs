using System;
using System.Text;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using  dotNetDll;

//Reffremce > Add Redrence File.dll
namespace Call.NetDLl
{

    class Program
    {

        static void Main(string[] args)
        {
            //OOP Rules [Variables Should Be static]
            //Cant Call Static Function From Object
            //Dont Forget Access Modifires Effect


            //Access Public Static Members 
            dotNetDll.Class1 dllCall = new dotNetDll.Class1();
            Console.WriteLine(dllCall.x);
            dllCall.fx(2);
            //Access non-Static Members
            dotNetDll.Class1.f(10, 200);
            








        } } }

