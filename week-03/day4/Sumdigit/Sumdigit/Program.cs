using System;

namespace Sumdigit
{
    class Program
    {
        static void Main(string[] args)
        {
            // Given a non-negative int n, return the sum of its digits recursively (no loops). 
            // Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while 
            // divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
            Console.WriteLine(sumOfItsDigits(420));
            Console.Read();
        }
        public static int sumOfItsDigits(int n)
        {
            int rightmost;
            if (n/10==0)
            {
                return n;
            }
            else
            {
                rightmost = n % 10;
                return sumOfItsDigits(n / 10)+rightmost;
            }
        }
    }
}
