#include <stdio.h>
#include <time.h>
/*
Create a struct that represents a pirate
It should store:
 - name
 - an int value which tells us if he/she has a wooden leg?
 - gold count
Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates
Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate
Create a function that takes an array of pirates (and it's length) then returns the name of the
richest that has wooden leg
*/


typedef struct {
    char name[100];
    int has_wooden_leg;
    short int gold_count;
}pirate;

int sum (pirate[],int);
int average (pirate[],int);
char* wooden_leg (pirate[],int);
char* apend(char*, char*,int,int);
int main()
{
    srand(time(NULL));
    int r = rand()%20;
    pirate pirates[20];
    printf("No.\tname\twooden\tgold\t\n");
    char* piaretname={"Pali"};
    for (int i=0;i<20;i++)
    {
        //pirates[i].name='p','a';
        strcpy(pirates[i].name,piaretname);
        printf("%d\t",i);
        printf("%s\t",pirates[i].name);

        pirates[i].has_wooden_leg=rand()%2;

        printf("%d\t",pirates[i].has_wooden_leg);

        pirates[i].gold_count=rand()%20;

        printf("%d\n",pirates[i].gold_count);

    }
    printf("\n");

    int length = sizeof(pirates)/sizeof(pirate);
    printf("sum= %d gold\n",sum(pirates,length));
    printf("sum= %d gold/pirate\n",average(pirates,length));
    printf("w= %s \n",wooden_leg(pirates,length));
    return 0;
}

int sum(pirate piartes[],int length )
{
    int gold=0;
    for(int i=0;i<length;i++){
       gold += piartes[i].gold_count;
    }
    return gold;
}
int average(pirate piartes[],int length )
{
    int gold=0;
    for(int i=0;i<length;i++){
        gold += piartes[i].gold_count;
    }
    return gold/length;
}
char* wooden_leg(pirate piartes[],int length )
{
    char* names;
    int namesc=0;
    for(int i=0;i<length;i++){
        if (piartes[i].has_wooden_leg==1&&namesc==0){
            names=piartes[i].name;
            namesc++;
        }
        else if (piartes[i].has_wooden_leg==1)
        {
            names=apend(names,piartes[i].name,sizeof(names)/sizeof(char),sizeof(piaretname)/sizeof(char));
            namesc++;
        }
    }
    return names;
}
char* apend(char* base, char* name, int length_of_b, int length_of_name)
{
    int x=10;
    char full[100]={"ba"};
    int j=length_of_b;
    int expectid_length=length_of_b+length_of_name;
    int i=0;
    for(int i=0 ; i; i++)
    {
        full[length_of_b+i] = base[i];
        printf("%c %c \n",full[length_of_b+i],base[i]);
    }
    char* pfull=&full;

    return pfull;
}
