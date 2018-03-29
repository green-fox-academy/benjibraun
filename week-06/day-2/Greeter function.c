#include <stdio.h>
#include <stdlib.h>
// - Create a char array variable named `al` and assign the value `Greenfox` to it
// - Create a function called `greet` that greets it's input parameter
//     - Greeting is printing e.g. `Greetings dear, Greenfox`
// - Greet `al`

// - Create a char array variable named `am` and assign the value `kuty` to it
// - Write a function called `appendA` that gets a string as an input,
//   appends an 'a' character to its end and returns with a string
// - Print the result of `appendAFunc(am)`
void greet(char*);
char* appendA(char*,int);
int main()
{
    char* al="Greenfox";
    char* am="kuty";
    int size=sizeof(am)/sizeof(am[0]);
    greet(al);
    puts (appendA(am,size));
    return 0;
}
void greet(char* al)
{
    char* al2="Greetings dear,";
    printf("%s %s\n",al2,al);
}

char* appendA(char* am, int size)
{
    char* a;
    a = (char *)malloc(size * sizeof(char));
    for (int i=0;i<size;i++)
    {
        a[i]=am[i];
    }
    a[size]='a';
    return a;
}
