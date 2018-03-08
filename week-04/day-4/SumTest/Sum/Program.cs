using System;
using System.Collections.Generic;
using System.Linq;
namespace Sum
{
    public class Program
    {

        public static int Sum(List<int> nums)
        {
            if (nums != null)
            {
                return nums.Sum();
            }
            else
            {
                return 0;
            }
        }


        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            
    }

    }
}
