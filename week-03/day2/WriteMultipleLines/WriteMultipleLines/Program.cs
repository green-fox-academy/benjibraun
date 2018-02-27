using System;
using System.IO;
namespace WriteMultipleLines
{
    class Program
    {
        static void Main(string[] args)
        {
            string fileName;
            string word;
            int lineNumber;
            Console.WriteLine();
            fileName = consoleInput("file name:");
            word = consoleInput("word:");
            lineNumber= int.Parse(consoleInput("Lines :"));
            WriteMultiLine(fileName, word, lineNumber);
            
        }
        public static string consoleInput(string inputName)
        {
            Console.WriteLine(inputName);
            return Console.ReadLine();
        }
        public static void WriteMultiLine(string fileName, string word, int lineNumber)
        {
            try
            {
                string path = @"C:/Benji/" + fileName + ".txt";
                using (StreamWriter writer = new StreamWriter(path))
                {
                    for (int i = 0; i < lineNumber; i++)
                    {
                        writer.WriteLine(word);
                    }
                }
            }
            finally
            {
                Console.Read();

            }
        }
    }
}
