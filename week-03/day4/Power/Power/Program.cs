using System;

namespace Power
{
    class Program
    {
        static void Main(string[] args)
        {
            // Given base and n that are both 1 or more, compute recursively (no loops)
            // the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
            Console.WriteLine(powerN(4,6));
            Console.Read();
            
        }
        public static int powerN(int n, double power)
        {

            if (power==0)
            {
                return n;
            }
            else
            {
                power--;
                n = n * n;
                Console.WriteLine(n);
                return powerN(n,power);
                
            }
        }
    }
}
