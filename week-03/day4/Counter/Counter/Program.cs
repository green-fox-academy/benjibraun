using System;

namespace Counter
{
    class Program
    {
        static void Main(string[] args)
        {
            // Write a recursive function that takes one parameter: n and counts down from n.
            countDown(10);
            Console.Read();
        }

        public static void countDown(int n)
        {
            if (n == 1)
            {
                Console.WriteLine(1);
            }
            else
            {
                Console.WriteLine(n);
                countDown(n - 1);
            }
        }
    }
}
