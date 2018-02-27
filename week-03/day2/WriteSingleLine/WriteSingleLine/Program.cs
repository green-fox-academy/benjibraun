using System;
using System.IO;
namespace WriteSingleLine
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                string path = @"C:/Benji/my-file.txt";
                using (StreamWriter writer = new StreamWriter(path))
                {
                    writer.WriteLine("Gusztáv");
                }
            }
            catch(Exception)
            {
                Console.WriteLine("Unable to write file: my-file.txt");
                Console.Read();
            }
        }
    }
}
