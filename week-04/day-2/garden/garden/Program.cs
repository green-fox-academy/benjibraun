using System;
using System.Collections.Generic;
namespace garden
{
    class Program
    {
        static void Main(string[] args)
        {

            var garden = new List<Plant>();

            var yellowFlower = new Flower();
            var blueFlower = new Flower();

            
        }
        public void Water()
        {

        }
        public void PrintStatus(List<Plant> listOfPlants)
        {
            foreach (var plant in listOfPlants)
            {
                Console.WriteLine($"The {plant.name} needs water");
            }
        }
}
