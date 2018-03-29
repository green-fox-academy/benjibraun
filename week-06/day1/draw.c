#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a program that prints the numbers from 1 to 100.
    // But for multiples of three print “Fizz” instead of the number
    // and for the multiples of five print “Buzz”.
    // For numbers which are multiples of both three and five print “FizzBuzz”.
    // But this time use only switch case!

    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was
    int num;
    printf("num:");
    scanf("%d", &num);


    for(int i=1;i<num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%
    // %%  %
    // % % %
    // %  %%
    // %%%%%
    //
    // The square should have as many lines as the number was
    char ch='%';
    for(int i =0;i<=num;i++)
    {
        if(i==num||i==0)
        {
            for(int j=0; j<num; j++)
            {
                printf("%c",ch);
            }
        }
        else
        {
            for(int j=0; j<num; j++)
            {
                if(j==0||j==num-1||j==i)
                {
                printf("%c",ch);
                }
                else
                {
                   printf(" ");
                }
            }
        }
        printf("\n");
    }
    // Crate a program that draws a chess table like this
    //
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    //

    for (int i=0; i<num; i++)
    {
        if(i%2==0)
        {
            printf("%c %c %c %c",ch,ch,ch,ch);
        }
        else
        {
             printf(" %c %c %c %c",ch,ch,ch,ch);
        }
        printf("\n");
    }
}
