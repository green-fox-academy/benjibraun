using System;

namespace Counter
{
    class Program
    {
        static void Main(string[] args)
        {
            var count = new Counter();
            count.Add(10);
            count.Add(1);
            count.Reset();
            Console.WriteLine(count.Get());
        }
    }
}
