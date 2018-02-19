using System;

namespace Summing
{
    class Program
    {
        static void Main(string[] args)
        {
            // - Write a function called `sum` that sum all the numbers
            //   until the given parameter and returns with an integer
            int[] numArr = { 1, 2, 3, 5 };
            Console.WriteLine( sum(numArr));
            Console.Read();

        }
        public static int sum(int[] nums)
        {
            int add=0;
            foreach(int each in nums)
            {
                add = add + each;
            }
            return add;
        }
    }
}
