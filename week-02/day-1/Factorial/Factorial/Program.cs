using System;

namespace Factorial
{
    class Program
    {
        static void Main(string[] args)
        {
            // - Create a function called `factorio`
            //   that returns it's input's factorial

            Console.WriteLine("enter number");
            int input = int.Parse(Console.ReadLine());

            int[] numes = new int[input-1];
            for (int i=0; i<input-1;i++)
            {
                numes[i] = i+2;
                

            }
            Console.WriteLine(factorio(numes));
            Console.ReadLine();
        }
        public static int factorio(int[] nums)
        {
            int factor = 1;
            foreach (int each in nums)
            {

                factor = factor * each;

            }
            return factor;
        }
    }
}
