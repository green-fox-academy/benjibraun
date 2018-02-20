using System;
using System.Collections.Generic;
using System.Text;
namespace list3
{
    class Program
    {
        static void Main(string[] args)
        {
            var far = new List<string> { "kuty", "macsk", "kacs", "rók", "halacsk" };
            // Create a method called AppendA() that adds "a" to every string in the far list.
            // The parameter should be a list.

            Console.WriteLine(AppendA(far));
            // Expected output: "kutya", "macska", "kacsa", "róka", "halacska"
            Console.Read();
        }
        public static string AppendA(List<string> listWhitoutA)
        {
            var animalWhitA = new StringBuilder("");
            for (int i = 0; i < listWhitoutA.Count;i++)
            {
                if (i == listWhitoutA.Count - 1)
                {
                    animalWhitA.Append(listWhitoutA[i]+"a");
                    
                }
                else
                {
                    animalWhitA.Append(listWhitoutA[i]+"a");
                    animalWhitA.Append(", ");
                }
            }


                return animalWhitA.ToString();
        }
    }
}
