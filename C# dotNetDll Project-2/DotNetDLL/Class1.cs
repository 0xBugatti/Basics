using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
namespace DotNetDLL
{
    //Add refrence\assembly\System.Windows.Forms in your project
    public class Class1
    {
        public string vectim_code;
        

        //Methods Should Be Public
/*        private int _key;
        public int Key
        {
            get { return _key; }
            set { _key = value; }
        }*/
        static public int IDouble(UInt16 b ) {
            return b * 2;

        }
        static public void Double(UInt32 a)
        {
            Console.WriteLine($"Variable is :{a*2}");
        }

        static  public  void Messageme()
        {
            MessageBoxButtons buttons = MessageBoxButtons.YesNo;

            string message = "You Have Been H4ck3d?";
            string title = "0xBugatti";
            MessageBox.Show(message, title,buttons);

        }

        public int Hackerteels(int a)
        {
            int i = 0;
            while(i <= a)
            {
                
                Console.WriteLine($"\t\t0xBugat11 Hacked You {i}\t\t");
                i++;
            }
            return a;
        }
    
    }
}
