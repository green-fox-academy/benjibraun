using System;
using System.Collections.Generic;
using System.Text;

namespace list1
{
    class Program
    {
        static void Main(string[] args)
        {
            var planetList = new List<string> { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Uranus", "Neptune" };


            // Saturn is missing from the planetList
            // Insert it into the correct position
            // Create a method called PutSaturn() which has list parameter and returns the correct list.

            Console.WriteLine(PutSaturn(planetList));
            // Expected output: "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Uranus", "Neptune", "Saturn"
            Console.Read();

        }
        public static string PutSaturn(List<string> incorrectListOfPlanet)
        {
            StringBuilder correctlistofplanets = new StringBuilder();

            foreach (string planet in incorrectListOfPlanet)
            {
                if (planet=="Jupiter")
                { 

                    correctlistofplanets.Append(planet);
                    correctlistofplanets.Append(", ");
                    correctlistofplanets.Append("Saturn, ");
                }
                else if (planet == "Neptune")
                {
                    correctlistofplanets.Append(planet);
                    
                }
                else
                {
                    correctlistofplanets.Append(planet);
                    correctlistofplanets.Append(", ");
                }

        }
            
            
            
            return correctlistofplanets.ToString();
        }
    }
}
