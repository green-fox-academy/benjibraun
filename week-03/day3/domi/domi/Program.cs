using System;
using System.Collections.Generic;

namespace domi
{
    public class Dominoes
    {
        public static void Main(string[] args)
        {
            var dominoes = InitializeDominoes();
            // You have the list of Dominoes
            // Order them into one snake where the adjacent dominoes have the same numbers on their adjacent sides
            // Create a function to write the dominous to the console in the following format
            // eg: [2, 4], [4, 3], [3, 5] ...
            var dominok = InitializeDominoes();
            IntoOnesSnake(dominok);
            Console.Read();

            }

        public static List<Domino> InitializeDominoes()
        {
            var dominoes = new List<Domino>();
            dominoes.Add(new Domino(5, 2));//1
            dominoes.Add(new Domino(4, 6));//3
            dominoes.Add(new Domino(1, 5));//6
            dominoes.Add(new Domino(6, 7));//4
            dominoes.Add(new Domino(2, 4));//2
            dominoes.Add(new Domino(7, 1));//5
            return dominoes;
        }
        public static void IntoOnesSnake(List<Domino> dominok)
        {
            int[] domino1= dominok[0].GetValues();
            int[] domino2;
            for (int i = 0; i < dominok.Count; i++)
            {
                for (int j = 0; j <dominok.Count ; j++)
                {
                    domino2 = dominok[j].GetValues();
                    if (domino1[1] == domino2[0])
                    {
                        Console.WriteLine(domino2[0] +"," +domino2[1]);
                        domino1 = dominok[j].GetValues();
                    }
                }
                
            }

        }
    }
}
