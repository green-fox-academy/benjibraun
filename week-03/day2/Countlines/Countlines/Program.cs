using System;
using System.IO;

namespace Countlines
{
    class Program
    {
        static void Main(string[] args)
        {
            string input;
            input=Console.ReadLine();
            CntLines(input);

        }
        public static void CntLines(string fileName)
        {
            int output;
            
            try
            {
                string path = @"C:/" + fileName + ".txt";
                string[] content = File.ReadAllLines(path);
                output = content.Length;
                Console.WriteLine(output);

            }
            catch(Exception)
            {
                output = 0;
                Console.WriteLine(output);
            }
            finally
            {
                Console.Read();
            }
        }
    }
}
