#include <stdio.h>
#include <stdlib.h>
/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

typedef struct {
    char name [50];
    float price;
    float weight;

} sandwich;

float preic_of_order(sandwich , int);
int main()
{
    sandwich ham_sandwich={"ham sandwich",2.5,300};
    printf("price=%.1f", preic_of_order(ham_sandwich,1));
    return 0;
}
float preic_of_order(sandwich sandwich, int num_of)
{
    return sandwich.price*num_of;
}
