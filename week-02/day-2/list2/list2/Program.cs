using System;
using System.Collections.Generic;
using System.Text;

namespace list2
{
    class Program
    {
        static void Main(string[] args)
        {
            var girls = new List<string> { "Eve", "Ashley", "Bözsi", "Kat", "Jane" };
            var boys = new List<string> { "Joe", "Fred", "Béla", "Todd", "Neef", "Jeff" };

            // Write a method that joins the two lists by matching one girl with one boy into a new list
            // Exepected output: "Eve", "Joe", "Ashley", "Fred"...
            Console.WriteLine(MakingMatches(girls, boys));
            Console.Read();

        }
        public static string MakingMatches(List<string> girls, List<string> boys)
        {

            var girlsPlusBoys=new StringBuilder("");
            for (int i=0; i<girls.Count;i++)
            {
                if (i== girls.Count-1)
                { 
                girlsPlusBoys.Append(girls[i]);
                girlsPlusBoys.Append(", ");
                girlsPlusBoys.Append(boys[i]);
                
                }
                else
                {
                    girlsPlusBoys.Append(girls[i]);
                    girlsPlusBoys.Append(", ");
                    girlsPlusBoys.Append(boys[i]);
                    girlsPlusBoys.Append(", ");
                }
        }
            return girlsPlusBoys.ToString();
        }
    }
}
