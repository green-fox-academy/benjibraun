using System;

namespace Print_arguments
{
    class Program
    {
        static void Main(string[] args)
        {
            // - Create a function called `printer`
            //   which prints the input String parameters
            // - It can have any number of parameters

            // Examples
            // printer("first")
            // printer("first", "second")
            // printer("first", "second", "third", "fourh")
            // ...
            int cnt = 0;
            string input;
            string text="";
            while (true)
            {
                Console.WriteLine("enter string: ");
                input =Console.ReadLine();
                text = printer(input, text);
                cnt++;


            }
        }
        public static string printer(string inp,string tx)
        {
            string message;
            if (tx=="")
            {
                message = inp;
                
            }
            else
            {

                message = tx + "," + inp;
              

            }
            Console.WriteLine(message);
            return message;
            //params

        }
    }
}
