using System;
using System.Text;

namespace string4
{
    class Program
    {
        static void Main(string[] args)
        {
           
            // Add "My todo:" to the beginning of the todoText
            // Add " - Download games" to the end of the todoText
            // Add " - Diablo" to the end of the todoText but with indention

            // Expected output:

            // My todo:
            //  - Buy milk
            //  - Download games
            //      - Diablo

            StringBuilder todoText = new StringBuilder("My todo:\n");
            todoText.Append(" - Buy milk\n");
            todoText.Append(" - Download games\n");
            todoText.Append(" \t- Diablo");

            Console.WriteLine(todoText);
            Console.Read();
        }
    }
}
