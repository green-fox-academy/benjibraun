using System;
using System.Collections.Generic;
using System.Text;
namespace list6
{
    class Program
    {
        static void Main(string[] args)
        {
            var list = new List<int> { 2, 4, 6, 8, 10, 12, 14, 16 };
            var list2 = new List<int> { 4, 8, 12, 16 };
            // Check if list contains all of the following elements: 4,8,12,16
            // Create a method that accepts list as an input
            // it should return "true" if it contains all, otherwise "false"
            Console.WriteLine(CheckNums(list,list2));
            Console.Read();
        }
        public static bool CheckNums(List<int> list, List<int> list2)
        {
            bool numCheck=true;

            foreach (var num in list2)
            {
                if (list.Exists(e => e.Equals(num)))
                {
                    numCheck = true;
                }
                else
                {
                    return false;
                }

            }
            return true;



            

        }

    }
}
