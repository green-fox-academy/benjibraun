using System;
using System.IO;

namespace PrintEachLine
{
    class Program
    {
        static void Main(string[] args)
        {
            string path = @"C:/my-file.txt";
            try
            {
                // Reads the content from `lorem-psum.txt` in the `assets` folder line by line to a string List
                string[] content = File.ReadAllLines(path);
                // Prints the first line of the file
                foreach(var line in content)
                {
                    Console.WriteLine(line);
                }
                
            }
            catch (Exception)
            {
                Console.WriteLine("Unable to read file: my-file.txt");
            }

            Console.ReadLine();
        }
    }
}
