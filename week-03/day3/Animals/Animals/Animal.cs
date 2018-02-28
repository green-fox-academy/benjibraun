using System;
using System.Collections.Generic;
using System.Text;

namespace Animals
{
    class Animal
    {
        public int hunger;
        public int thirst;
        public void Eat()
        {
            hunger++;
        }
        public void Drink()
        {
            thirst++;
        }
        public void Play()
        {
            hunger--;
            thirst--;
        }
        public Animal(int hunger, int thirst)
        {
            this.hunger = hunger;
            this.thirst = thirst;
        }

    }
}
