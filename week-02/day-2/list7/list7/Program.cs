using System;
using System.Collections.Generic;
using System.Text;
namespace list7
{
    class Program
    {
        static void Main(string[] args)
        {
            var list = new List<string> { "What", "I", "do", "create,", "I", "cannot", "not", "understand." };
            // what i cannot create i do not understand
            // Accidentally I messed up this quote from Richard Feynman.
            // Two words are out of place
            // Your task is to fix it by swapping the right words with code
            // Create a method called QuoteSwap().

            // Also, print the sentence to the output with spaces in between.
            Console.WriteLine(QuoteSwap(list));
            // Expected output: "What I cannot create I do not understand."
            Console.Read();
        }
        public static string QuoteSwap(List<string> list)
        {
            string buffer = list[2];
            list[2] = list[5];
            list[5] = buffer;
            var quote = new StringBuilder();
            foreach(var word in list)
            {
                quote.Append(word);
                quote.Append(" ");
            }
            return quote.ToString();

        }
    }
}
