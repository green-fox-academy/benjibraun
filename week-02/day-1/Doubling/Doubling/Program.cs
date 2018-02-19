using System;

namespace Doubling
{
    class Program
    {
        static void Main(string[] args)
        {
            // - Create an integer variable named `ak` and assign the value `123` to it
            // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
            // - Print the result of `doubling(ak)`

            int ak = 123;
            Console.WriteLine(Doubling(ak));


            Console.ReadLine();

        }

        public static int Doubling(int num)
        {
            return num * 2;
        }
    }
}
