using System;

namespace dividebyzero
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                int input;
                input = int.Parse(Console.ReadLine());
                divideTen(input);
            }

        }
        public static void divideTen(int divider)
        {
            int output;
            try
            {

                output = 10 / divider;
                Console.WriteLine(output);

            }
            catch (DivideByZeroException e)
            {
                Console.WriteLine("fail");
            }
        }
    }
}
