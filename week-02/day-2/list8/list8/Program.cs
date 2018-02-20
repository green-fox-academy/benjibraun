using System;
using System.Collections.Generic;
using System.Text;
namespace list8
{
    class Program
    {
        static void Main(string[] args)
        {
            // Create a simple calculator application which reads the parameters from the prompt
            // and prints the result to the prompt.
            // It should support the following operations,
            // reate a method named "Calculate()":
            // +, -, *, /, % and it should support two operands.
            // The format of the expressions must be: {operation} {operand} {operand}.
            // Examples: "+ 3 3" (the result will be 6) or "* 4 4" (the result will be 16)

            // You can use the Scanner class
            // It should work like this:

            // Start the program
            // It prints: "Please type in the expression:"
            // Waits for the user input
            // Print the result to the prompt
            // Exit
            while (true)
            { 

                string input=Console.ReadLine();
                Console.WriteLine( Calculate(input));
             }


    }
        public static int Calculate(string input)
        {

            string [] i = input.Split(" ");

            if (i[0] == "+")
            {
                return int.Parse(i[1]) + int.Parse(i[2]);
            }
            else if (i[0] == "-")
            {
                return int.Parse(i[1]) - int.Parse(i[2]);
            }
            else if (i[0] == "*")
            {
                return int.Parse(i[1]) * int.Parse(i[2]);
            }
            else if (i[0] == "/")
            {
                return int.Parse(i[1]) / int.Parse(i[2]);
            }
            else
                return 42;

      
        }



    }
}
