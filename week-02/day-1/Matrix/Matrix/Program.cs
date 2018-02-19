using System;

namespace Matrix
{
    class Program
    {
        static void Main(string[] args)
        {
            // - Create (dynamically) a two dimensional array
            //   with the following matrix. Use a loop!
            //
            //   1 0 0 0
            //   0 1 0 0
            //   0 0 1 0
            //   0 0 0 1
            //
            // - Print this two dimensional array to the output
            int[][] matrix = new int[4][];
           for (int i=0;i<4;i++)
            {
                matrix[i] = new int[4];
                matrix[i][i] = 1;
            }

           for (int i=0;i<4;i++)
            { 
            foreach (int  each in matrix[i])
            {
                Console.Write(each);
            }
                Console.Write("\n");
            }

        Console.ReadLine();
        }
    }
}
