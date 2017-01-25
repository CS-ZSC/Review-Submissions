using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication
{
    class Program
    {
        static int fact(int num)
        {
            if (num == 1)
            {
                return 1;
            }
            return num * fact(num - 1);
        }

        static void Main(string[] args)
        {
            int n;
            Console.Write("Please Enter number: ");
            n = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(fact(n));
        }
    }
}
