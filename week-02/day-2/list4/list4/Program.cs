using System;
using System.Collections.Generic;
using System.Text;
namespace list4
{
    class Program
    {
        static void Main(string[] args)
        {
            var list = new List<object>();
            list.Add("Cupcake");
            list.Add(2);
            list.Add("Brownie");
            list.Add(false);

            // Accidentally we added "2" and "false" to the list.
            // Your task is to change from "2" to "Croissant" and change from "false" to "Ice cream"
            // No, don't just remove the lines
            // Create a method called Sweets() which takes the list as a parameter.


            Console.WriteLine(Sweets(list));
            // Expected output: "Cupcake", "Croissant", "Brownie", "Ice cream"
            Console.Read();
        }
        public static string Sweets(List<object> incorrectList)
        {
            var correctlist = new StringBuilder();
            foreach(var each in incorrectList)
            {
                if(each is string)
                {
                    correctlist.Append(each);
                    correctlist.Append(", ");
                }
                else if (each is int)
                {
                    
                    correctlist.Append("Croissant, ");
                }
                else if (each is bool)
                {

                    correctlist.Append("Ice cream");
                }
            }
            return correctlist.ToString();
        }
    }
}
