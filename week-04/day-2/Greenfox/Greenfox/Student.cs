using System;
using System.Collections.Generic;
using System.Text;

namespace Greenfox
{
    class Student : Person, ICloneable
    {
        private string previousOrganization;
        private int skippedDays=0;

        public override void GetGoal()
        {
            Console.WriteLine("Be a junior software developer.");
        }

        public override void Introduce()
        {
            Console.WriteLine($"Hi, I'm {name}, a {age} year old gender from {previousOrganization} who skipped {skippedDays} days from the course already.");
        }


        public void SkipDays(int numberOfDays)
        {
            skippedDays += numberOfDays;
        }

        public object Clone()
        {
            return new Student(name, age,gender,previousOrganization);
        }

        public Student(string name, int age, string gender, string previousOrganization) : base(name, age,gender)
        {
            this.previousOrganization = previousOrganization;
        }

        public Student() :base()
        {
            previousOrganization = "The School of Life";
        }
    }
}
