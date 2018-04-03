#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/
typedef struct{
    char address [50];
    int num_of_rooms;
    float price;
    float area;
}House;
char* worth_to_buy(House*);
int main()
{
    House house;// ={"kocsagbuznyogany st 12",1,2,3};
    strcpy(house.address,"kocsagbuznyogany st 12");
    house.num_of_rooms=1;
    House* hp =&house;
    printf("%s",house.address);
    printf("%d",house.num_of_rooms);
    worth_to_buy(hp);
    return 0;
}
char* worth_to_buy(House* hp)
{
    printf("%d",hp);
}
