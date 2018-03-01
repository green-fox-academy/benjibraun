using System;

namespace Numberadder
{
    class Program
    {
        static void Main(string[] args)
        {
            // Write a recursive function that takes one parameter: n and adds numbers from 1 to n.
            Console.WriteLine(AddsNumbers(10));
            Console.Read();
        }
        public static int AddsNumbers(int n)
        {
            
            if (n==1)
            {
                return 1; 
            }
            else
            {
                n--;              
                return n+AddsNumbers(n);
            }
        }
    }
}
