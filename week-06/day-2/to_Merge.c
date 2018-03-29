#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits


int main()
{
    int* pointer = NULL;
    pointer = (int *)malloc(10 * sizeof(int));

    for (int i=0;i<5;i++){
        pointer[i]=i;
    }
        for (int i=0;i<10;i++){
        printf("%d\n",pointer[i]);
    }
    free(pointer);
    // with calloc
    // please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
    // please delete the array before the program exits
    // what's the difference between this and the previous excersice?

     pointer = (int *)calloc(10, sizeof(int));
      for (int i=0;i<5;i++){
        pointer[i]=i;
    }
       for (int i=0;i<10;i++){
        printf("%d\n",pointer[i]);
    }

    // with malloc
    // please allocate a 10 long array and fill it with even numbers then print the whole array
    // please deallocate memory without using free

    pointer = (int *)malloc(10 * sizeof(int));
    for (int i=0;i<10;i++){
            pointer[i]=i;
        }
    for (int i=0;i<10;i++){
            printf("%d\n",pointer[i]);
        }
    free(pointer);


    // please allocate a 10 long array and fill it with even numbers
    // please allocate a 10 long array and fill it with odd numbers
    // select an array, and push the elements into the another array
    // print it the array in descending order
    // delete the arrays after you don't use them

    int* pointer2;
    pointer = (int *)malloc(10 * sizeof(int));
    pointer2 = (int *)malloc(10 * sizeof(int));
    printf("\n\n");
    for (int i=0, j=1, k=0; k<10; i+=2, j+=2, k++)
    {
        pointer[k]=i;
        printf("%d\n",pointer[k]);
        pointer2[k]=j;
        printf("%d\n",pointer2[k]);
    }
    pointer=realloc(pointer,20 * sizeof(int));

    for (int i=20,j=0;i>0;i--,j++)
    {
        pointer[j]=pointer2
    }


    return 0;
}
