using System;

namespace String1
{
    class Program
    {
        static void Main(string[] args)
        {
            // Given a string, compute recursively (no loops) a new string where all the
            // lowercase 'x' chars have been changed to 'y' chars.
            Console.WriteLine(ChangeToY("xxxkjkjxxxxx"));
            Console.WriteLine(RemoveX("xxxkjkjxxxxx"));
            Console.WriteLine(Star("xxxkjkjxxxxx"));
            Console.Read();
        }
        public static string ChangeToY(string randomStringWhitX)
        {
            
            if (randomStringWhitX.Length==0)
            {
                return randomStringWhitX;
            }
            char firstChar = randomStringWhitX[0];
            randomStringWhitX = randomStringWhitX.Remove(0, 1);
            if (firstChar == 'x')
            {
                return "y"+ChangeToY(randomStringWhitX);
            }
            else
            {
                return firstChar + ChangeToY(randomStringWhitX);
            }
        }
        public static string RemoveX(string randomStringWhitX)
        {

            if (randomStringWhitX.Length == 0)
            {
                return randomStringWhitX;
            }
            char firstChar = randomStringWhitX[0];
            randomStringWhitX = randomStringWhitX.Remove(0, 1);
            if (firstChar == 'x')
            {
                return RemoveX(randomStringWhitX);
            }
            else
            {
                return firstChar + RemoveX(randomStringWhitX);
            }
        }
        public static string Star(string randomStringWhitX)
        {

            if (randomStringWhitX.Length == 1)
            {
                return randomStringWhitX;
            }
            else
            {
                char firstChar = randomStringWhitX[0];
                randomStringWhitX = randomStringWhitX.Remove(0, 1);
                return firstChar +"*"+ Star(randomStringWhitX);
            }
        }
    }
}
