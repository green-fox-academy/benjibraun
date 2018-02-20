using System;
using System.Collections.Generic;
using System.Text;
namespace list5
{
    class Program
    {
        static void Main(string[] args)
        {
            var List = new List<int> { 1, 2, 3, 4, 5 };
            Console.WriteLine(ContainsSeven(List));
            Console.WriteLine(ContainsSeven2(List));
            // Write a method that checks if the arrayList contains "7" if it contains return "Hoorray" otherwise return "Noooooo"
            // The output should be: "Noooooo"
            // Do this again with a different solution using different list methods!
            Console.Read();
        }
        public static string ContainsSeven(List<int> list)
        {
            if (list.Exists(e => e.Equals(7)))
            {
                return "Hoorray";

            }
            else
            {
                return "Noooooo"; 
            }
                
        }
        public static string ContainsSeven2(List<int> list)
        {
            int io=list.Find(x => x.Equals(7));
            if (io==7)
            {
                return "Hoorray";

            }
            else
            {
                return "Noooooo";
            }

        }
    }
}
