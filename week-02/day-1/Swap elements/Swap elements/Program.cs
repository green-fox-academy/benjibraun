using System;

namespace Swap_elements
{
    class Program
    {
        static void Main(string[] args)
        {
            // - Create an array variable named `abc`
            //   with the following content: `["first", "second", "third"]`
            // - Swap the first and the third element of `abc`

            string[] abc = { "first", "second", "third" };
            string buffer;
            buffer = abc[0];
            abc[0] = abc[2];
            abc[2] = buffer;
            

            Console.ReadLine();
        }
    }
}
