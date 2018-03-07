using System;
using System.Collections.Generic;
using System.Text;

namespace Greenfox
{
    class Mentor : Person
    {
        string level;
        public override void Introduce()
        {
            Console.WriteLine($"Hi, I'm {name}, a {age} year old gender {level} mentor.");
        }
        public override void GetGoal()
        {
            Console.WriteLine("Educate brilliant junior software developers.");
        }
        public Mentor(string name, int age, string gender, string level) : base(name, age, gender)
        {
            this.level = level;
        }
        public Mentor() : base()
        {
            level= "intermediate";
        }
    }
}
