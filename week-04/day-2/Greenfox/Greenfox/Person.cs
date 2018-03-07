using System;
using System.Collections.Generic;
using System.Text;

namespace Greenfox
{
    class Person
    {
        public string name;
        public int age;
        public string gender;

        public virtual void Introduce()
        {
            
            Console.WriteLine($"Hi, I'm {name}, a {age} year old {gender}.");
        }
        public virtual void GetGoal()
        {
            Console.WriteLine("My goal is: Live for the moment!");
        }
        public Person(string name, int age, string gender)
        {
            this.name = name;
            this.age = age;
            this.gender = gender;
        }
        public Person()
        {
            name = "Jane Doe";
            age = 30;
            gender = "female";
        }
    }
}
