using System;
using System.IO;
namespace TicTacToe
{
    class Program
    {
        static void Main(string[] args)
        {
            // Write a function that takes a filename as string,
            // open and read it. The file data represents a tic-tac-toe
            // game result. Return 'X'/'O'/'draw' based on which player
            // has winning situation.

            Console.WriteLine(TicTacResult("win-o.txt"));
            // should print O

            Console.WriteLine(TicTacResult("win-x.txt"));
            // should print X

            Console.WriteLine(TicTacResult("draw.txt"));
            // should print draw
            Console.Read();
        }
        public static string TicTacResult(string fileName)
        {
            try
            {
                char[][] test = new char[3][];
                test[0] = new char[3];
                test[1] = new char[3];
                test[2] = new char[3];
                char[] lineAsCharArray;
                string[] content = File.ReadAllLines("C:/Benji/" + fileName);
                int cnt = 0;
                foreach (string line in content)
                {
                    lineAsCharArray = line.ToCharArray();
                    test[cnt] = lineAsCharArray;
                    if (lineAsCharArray[0] == lineAsCharArray[1] && lineAsCharArray[2] == lineAsCharArray[1])
                    {
                        return lineAsCharArray[0].ToString();
                    }
                    cnt++;
                }
                for (int i = 0; i < 3; i++)
                {
                    if (test[0][i]== test[1][i]&& test[2][i] == test[1][i])
                    { return test[0][i].ToString(); }
                }
                if (test[0][0]== test[1][1]&& test[2][2] == test[1][1])
                {
                    return test[0][0].ToString();
                }
                else if(test[0][2] == test[1][1] && test[2][0] == test[1][1])
                {
                    return test[0][2].ToString();
                }


                return "draw";
            }
            catch(Exception)
            {
                return "nop";
            }

            
        }

        
    }
}
