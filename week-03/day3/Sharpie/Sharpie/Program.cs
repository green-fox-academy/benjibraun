using System;

namespace Sharpie
{
    class Program
    {
        static void Main(string[] args)
        {
            var varazsCeruza = new Sharpie("mindenféle", 10);
            while (varazsCeruza.inkAmount>0)
            {
                varazsCeruza.Use();
            }
            Console.WriteLine("...");
            Console.Read();
        }
    }
}
