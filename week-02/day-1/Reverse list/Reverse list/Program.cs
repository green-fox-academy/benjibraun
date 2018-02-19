using System;

namespace Reverse_list
{
    class Program
    {
        static void Main(string[] args)
        {
            // - Create an array variable named `aj`
            //   with the following content: `[3, 4, 5, 6, 7]`
            // - Reverse the order of the elements in `aj`
            // - Print the elements of the reversed `aj`
            int[] aj = { 3, 4, 5, 6, 7 };
            int buffer;
            int cntb = aj.Length-1;
            for (int i=0; i<aj.Length/2;i++)
            {
                buffer = aj[i];
                aj[i] = aj[cntb];
                aj[cntb] = buffer;

            }
            foreach (int each in aj)
            {
                Console.WriteLine(each);
            }


            Console.ReadLine();
        }
    }
}
