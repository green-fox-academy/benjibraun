using System;

namespace Bunny1
{
    class Program
    {
        static void Main(string[] args)
        {
            // We have a number of bunnies and each bunny has two big floppy ears.
            // We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
            Console.WriteLine(NumberOfBigFloppyEars(700));
            Console.Read();
        }
        public static int NumberOfBigFloppyEars(int numberOfBunnies)
        {
            if (numberOfBunnies == 1)
            {
                return 2;
            }
            numberOfBunnies--;
            return NumberOfBigFloppyEars(numberOfBunnies)+2;
        }
    }
}
