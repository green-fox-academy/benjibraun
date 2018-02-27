using System;
using System.IO;
namespace CopyFile
{
    class Program
    {
        static void Main(string[] args)
        {
            string fileName;
            string copyFileName;
            fileName = consoleInput("file name:");
            copyFileName = consoleInput("copy file name:");
            Copy(fileName, copyFileName);
        }
        public static string consoleInput(string inputName)
        {
            Console.WriteLine(inputName);
            return Console.ReadLine();
        }
        public static void Copy(string fileName, string copyFileName)
        {
            try
            {
                string[] content = File.ReadAllLines("C:/Benji/"+ fileName+".txt");
               
             
               
                string path = @"C:/Benji/" + copyFileName + ".txt";
                using (StreamWriter writer = new StreamWriter(path))
                {

                    foreach (var line in content)
                    {
                        writer.WriteLine(line);
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
