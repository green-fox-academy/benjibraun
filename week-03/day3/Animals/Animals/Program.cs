using System;

namespace Animals
{
    class Program
    {
        static void Main(string[] args)
        {
            var csigaBiga = new Animal(50, 50);
           
            while (csigaBiga.hunger > 0)
            {
                csigaBiga.Play();
                
            }
            Console.WriteLine("csigabiga is dead");
            Console.Read();
        }
    }
}
