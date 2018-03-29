#include <stdio.h>
#include <stdlib.h>

int main()
{
    // - Create an array variable named `q`
    //   with the following content: `[4, 5, 6, 7]`
    // - Print the third element of `q`

    int q[] ={4, 5, 6, 7};
    printf("%d\n",q[2]);

    // - Create an array variable named `p1`
    //   with the following content: `[1, 2, 3]`
    // - Create an array variable named `p2`
    //   with the following content: `[4, 5]`
    // - Print if `p2` has more elements than `p1`

    int p1 []={1,2,3};
    int p2 []={4,5};

    if (sizeof(p2)>sizeof(p1))
    {
        printf("p2 has more\n");
    }
    else
    {
        printf("p1 has more\n");
    }
    // - Create an array variable named `r`
    //   with the following content: `[54, 23, 66, 12]`
    // - Print the sum of the second and the third element

    int r[]= {54, 23, 66, 12};

    printf("%d\n",r[1]+r[2]);
    // - Create an array variable named `s`
    //   with the following content: `[1, 2, 3, 8, 5, 6]`
    // - Change the 8 to 4
    // - Print the fourth element
    int s[]={1, 2, 3, 8, 5, 6};
    s[3]=4;
    printf("%d\n",s[3]);

    //- Create an array variable named `t`
    //  with the following content: `[1, 2, 3, 4, 5]`
    //- Increment the third element
    //- Print the third element
    int t []= {1, 2, 3, 4, 5};
    ++t[2];
    printf("%d\n",t[2]);


    // - Create an array variable named `af`
    //   with the following content: `[4, 5, 6, 7]`
    // - Print all the elements of `af`
    int af []={4, 5, 6, 7};
    int size=sizeof(af)/sizeof(af[0]);
    for (int i=0;i<size;i++)
    {
        printf("af[%d]: %d\n",i,af[i]);
    }

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    int matrix[4][4];
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            if(j==i)
            {
                matrix[i][j]=1;
                printf("%d",matrix[i][j]);

            }
            else
            {
                matrix[i][j]=0;
                printf("%d",matrix[i][j]);
            }
        }
        printf("\n");
    }
    // print the memory address of the variable
    int number =1234;
    int *pnumber=&number;
    printf("%p\n%p\n%p\n",&number,pnumber,&pnumber);

    // print the value of number using the "number_pointer"

    int* number_pointer = &number;
    printf("%d\n",*number_pointer);
    // update the value of number variable to 42 using the "number_pointer"
    *number_pointer=5;
    printf("%d\n",number);
    //Add two numbers using pointers

    int a = 20;
    int b = 17;

    int* pa=&a;
    int* pb=&b;
    int c = *pa+*pb;
    printf("%d\n", c);

    //Print out the addresses with and without pointer
    //print out the values with and without pointer

    number = 2017;
    float Pi = 3.14;
    char letter = 't';

    printf("%p\n%p\n%p\n",&number,&Pi,&letter);


    // The "other_high_number_pointer" should point to the same memory address
    // without using the "&" operator.

    int high_number = 6655;
    int low_number = 2;

    int* hight_number_pointer = &high_number;
    int* other_high_number_pointer=hight_number_pointer;
    printf("%p\n%p\n",hight_number_pointer,other_high_number_pointer);


    return 0;
}
