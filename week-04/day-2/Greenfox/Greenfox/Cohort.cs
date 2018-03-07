using System;
using System.Collections.Generic;
using System.Text;

namespace Greenfox
{
    class Cohort
    {
        public string name;
        public List<Student> students = new List<Student>();
        public List<Mentor> mentors = new List<Mentor>();

        public void AddStudent(Student student)
        {
            students.Add(student);
        }
        public void AddMentor(Mentor mentor)
        {
            mentors.Add(mentor);
        }
        public void Info()
        {
            Console.WriteLine($"The {name} cohort has {students.Count} students and {mentors.Count} mentors.");
        }
        public Cohort(string name)
        {
            this.name = name;
        }



    }
}
