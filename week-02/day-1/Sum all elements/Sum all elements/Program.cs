using System;

namespace Sum_all_elements
{
    class Program
    {
        static void Main(string[] args)
        {
            // - Create an array variable named `ai`
            //   with the following content: `[3, 4, 5, 6, 7]`
            // - Print the sum of the elements in `ai`
            int[] ai = { 3, 4, 5, 6, 7 };
            int sum = 0;
            foreach(int each in ai)
            {
                
                sum = sum+each;
                
            }
            Console.WriteLine(sum);
            Console.ReadLine();
        }
    }
}
