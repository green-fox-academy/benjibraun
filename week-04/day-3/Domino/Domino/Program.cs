using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace Domino 
{
    public class Program 
    {
        static void Main(string[] args)
        {
            var dominoes = new List<Domino>();
            dominoes.Add(new Domino(5, 2));
            dominoes.Add(new Domino(4, 6));
            dominoes.Add(new Domino(1, 5));
            dominoes.Add(new Domino(6, 7));
            dominoes.Add(new Domino(2, 4));
            dominoes.Add(new Domino(7, 1));

            dominoes.Sort();

            foreach (var item in dominoes)
            {
                Console.WriteLine($"[{item.GetValues()[0]},{item.GetValues()[1]}]");
            }
            Console.Read();

        }
    }
}
