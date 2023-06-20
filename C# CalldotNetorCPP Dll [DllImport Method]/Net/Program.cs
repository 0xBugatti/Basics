using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
namespace Net
{
 class Program
    {
        //Dll Static Calling

        [DllImport("C:\\Users\\Blu-Ray\\source\\C++\\Net\\Net\\bin\\Debug\\momo.dll",CallingConvention = CallingConvention.Cdecl)]
        public static extern int Hackme(int n);
        [DllImport("C:\\Users\\Blu-Ray\\source\\C++\\Net\\Net\\bin\\Debug\\momo.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern int Messageme();


        //Creation .NET Class Library Note : Dont Have main (Not StandAlone Executable)

        //RunDLL

        //Ideal Method Refrence\Right click\Add Refrence\Browse to Your Solution then using dllname (Handel it as NameSpace)
 //       Dllname.ClassName.Func|Var


        static void Main(string[] args)
        {
            Messageme();
            Hackme(4);
            // int a = MessageBox(IntPtr.Zero, "Momo", "Program", 0); 
            
            UInt64 x = 0b10101;
            uint ex = 0x1E1;
            Console.WriteLine("DEC Of Number 0x1E1 : " + (Int64)ex);
            Console.WriteLine("DEC Of Number 0b10101 : " + (Int64)x);


        }
    }
}
