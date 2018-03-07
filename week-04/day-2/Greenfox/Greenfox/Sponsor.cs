using System;
using System.Collections.Generic;
using System.Text;

namespace Greenfox
{
    class Sponsor : Person
    {
        public string company;
        public int hiredStudent=0;

        public override void Introduce()
        {
            Console.WriteLine($"Hi, I'm {name}, a {age} year old {gender} who represents {company} and hired {hiredStudent} students so far.");
        }
        public override void GetGoal()
        {
            Console.WriteLine("Hire brilliant junior software developers.");
        }
        public void Hire()
        {
            hiredStudent++;
        }
        public Sponsor(string name, int age, string gender, string company): base(name,age,gender)
        {
            this.company = company;
        }
        public Sponsor():base()
        {
            company = "Googel";
        }

    }
}
