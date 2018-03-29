#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=5;
    int guess;

    while(num!=guess){

        printf("guess\n");
        scanf("%d" , &guess);

        if(guess > num)
        {
            printf("The stried number is lower\n");
        }
        else if (guess < num)
        {
            printf("The stored number is higher\n");
        }
        else if (guess==num)
        {
            printf("You found the number:%d\n",num);
        }
    }
    return 0;
}
