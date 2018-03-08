using System;
using System.Collections.Generic;
namespace CountLetters
{
    public class Program
    {
        static void Main(string[] args)
        {

            string input=Console.ReadLine().ToString();
            var dic=CuntLeters(input);
            foreach (var item in dic)
            {
                Console.WriteLine(item);
            }
            Console.Read();
        }
        public static Dictionary<char, int> CuntLeters(string Word)
            {
            var occurrences = new Dictionary<char, int>();
            foreach (var item in Word)
            {
                if (occurrences.ContainsKey(item))
                {
                    occurrences[item]+=1;
                }
                else
                {
                     occurrences.Add(item, 1);
                }   
        }
            return occurrences;
            }
    }
}
