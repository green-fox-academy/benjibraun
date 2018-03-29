#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Modify this program to greet you instead of the World!
    printf("Hello Benji!\n");
    printf("\n");

    // Modify this program to print Humpty Dumpty riddle correctly
    printf("Humpty Dumpty sat on a wall,\n");
    printf("Humpty Dumpty had a great fall.\n");
    printf("All the king's horses and all the king's men\n");
    printf("Couldn't put Humpty together again.\n");
    printf("\n");

    // Greet 3 of your classmates with this program, in three separate lines
    // like:
    //
    // Hello, Esther!
    // Hello, Mary!
    // Hello, Joe!
    printf("Hello Esther!\n");
    printf("Hello Mary!\n");
    printf("Hello Joe!\n");
    printf("\n");

    // Write a program that prints a few details to the terminal window about you
  // It should print each detail to a new line.
  //  - Your name
  //  - Your age
  //  - Your height in meters (as a decimal fraction)
  //
  //  Example output:
  //  John Doe
  //  31
  //  1.87


    printf("Braun Benjamin\n");
    printf("27\n");
    printf("1.70\n");
    printf("\n");

    // Create a program that prints a few operations on two numbers: 22 and 13

  // Print the result of 13 added to 22

  // Print the result of 13 substracted from 22

  // Print the result of 22 multiplied by 13

  // Print the result of 22 divided by 13 (as a decimal fraction)

  // Print the reminder of 22 divided by 13
    double num1 = 22;
    double num2 = 13;
    printf("%d\n",13+22);
    printf("%d\n",22-13);
    printf("%d\n",22*13);
    printf("%d\n",22/13);
    printf("%.2f\n",num1/num2);

      // An average Green Fox attendee codes 6 hours daily
      // The semester is 17 weeks long
      //
      // Print how many hours is spent with coding in a semester by an attendee,
      // if the attendee only codes on workdays.
      //
      // Print the percentage of the coding hours in the semester if the average
      // work hours weekly is 52
    int hoursOfCodeing = 6;
    int weeks=17;
    int days=5;

    printf("%d\n",hoursOfCodeing*days*weeks);
    printf("\n");


    // Store your favorite number in a variable (as a number)
    // And print it like this: "My favorite number is: 8"
    int favorite_number = 8;
    printf("My favorite number is:%d",favorite_number);
    printf("\n");

    // Swap the values of the variables
    int a = 123;
    int b = 526;
    int tmp= a;
    a=b;
    b=tmp;
    printf("%d\n",a);
    printf("%d\n",b);

    // Print the Body mass index (BMI) based on these values
    double massInKg = 81.2;
    double heightInM = 1.78;
    printf("%.2f",massInKg/pow(heightInM,2));


    // Define several things as a variable then print their values
    // First letter of your name as a char
    // Your age as an integer
    // Your height in meters as a double
    // Your favourite positive number as an unsigned int
    char firstLetterOfName ='B';
    int age = 25;
    double heigh = 1.70;
    unsigned int favouritePositiveNumber  = 2;

     int a2 = 3;
    // make it bigger by 10
    a2+=10;
    printf("%d\n",a2);


    int b2 = 100;
    // make it smaller by 7
    b2-=7;
    printf("%d\n",b2);


    int c = 44;
    // please double c's value
    c*=2;
    printf("%d\n",c);


    int d = 125;
    // please divide by 5 d's value
    d/=5;
    printf("%d\n",d);


    int e = 8;
    // please cube of e's value
    e = pow(e,3);
    printf("%d\n",e);


    int f1 = 123;
    int f2 = 345;
    // tell if f1 is bigger than f2 (print as a boolean)
    if(f1>f2)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }


    int g1 = 350;
    int g2 = 200;
    // tell if the double of g2 is bigger than g1 (print as a boolean)
    if(f1*2>f2*2)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    int h = 1357988018575474;
    // tell if it has 11 as a divisor (print as a boolean)
    if(h%11==0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    int i1 = 10;
    int i2 = 3;
    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)
      if(i1>pow(i2,2) && i1<pow(i2,3))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    int j = 1521;
    // tell if j is dividable by 3 or 5 (print as a boolean)


    char k = "Apple";
    //fill the k variable with its cotnent 4 times
    printf("%c\n",k);

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    int h2 = 5;
    int w = 6;
    int l = 8;

    printf("Surface Area:%d\n", l*w+l*h2+w*h2);
    printf("Volume:%d\n", l*w*h2);

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables
    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;
    int seconds=86400;
    int remainingSeconds = seconds-(currentHours*60*60)+(currentMinutes*60)+currentSeconds;
    printf("remaining seconds: %d\n",remainingSeconds);


    // Modify this program int he printf() to greet user instead of the World!
    // The program should ask for the age of the user
    int age2;
    printf("Hello user, how old are you?\n");
    scanf("%d", &age2);

    printf("hello %d years old user.\n", age2);

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it
    int km;
    printf("Enter km:\n");
    scanf("%d", &km);
    printf("%dKm = %.5fMile\n",km,km*0.621371192);

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have
    int chickens;
    int pigs;
    printf("number of chickens:");
     scanf("%d", &chickens);
     printf("number of pigs:");
     scanf("%d", &pigs);
     printf("number of legs:%d\n",chickens*2+pigs*4);

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    float elso;
    float masodik;
    float harmadik;
    float negyedik;
    float otodik;
    float sum;
    printf("1.:");
    scanf("%f", &elso);
    printf( "2.:");
    scanf("%f", &masodik);
    printf( "3.:");
    scanf("%f", &harmadik);
    printf( "4.:");
    scanf("%f", &negyedik);
    printf( "5.:");
    scanf("%f", &otodik);
    sum=elso+masodik+harmadik+negyedik+otodik;
    printf("Sum:%f",sum);
    printf("Average: %.2f\n",sum/5);

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.
    int num3;
    printf("number:");
    scanf("%d", &num3);
    if (num3%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("odd\n");
    }

    // Write a program that reads a number form the standard input,
    // If the number is zero or smaller it should print: Not enough
    // If the number is one it should print: One
    // If the number is two it should print: Two
    // If the number is more than two it should print: A lot


    int num4;
    printf("number:");
    scanf("%d", &num4);

     switch(num4) {
        case 0 :
        printf("Not enough!\n" );
        break;
        case 1 :
        printf("One\n" );
        break;
        case 2 :
        printf("Two\n" );
        break;
        default:
        printf("A lot\n" );
     }

     // Write a program that asks for two numbers and prints the bigger one
    int num5;
    int num6;
    printf("number1:");
    scanf("%d", &num5);
    printf("number2:");
    scanf("%d", &num6);
    if (num5>num6)
    {
        printf("%d\n",num5);
    }
    else if (num5<num6)
    {
        printf("%d\n",num6);
    }
    else

    {
        printf("=\n");
    }

    // Write a program that asks for two numbers
    // Thw first number represents the number of girls that comes to a party, the
    // second the boys
    // It should print: The party is exellent!
    // If the the number of girls and boys are equal and there are more people coming than 20
    //
    // It should print: Quite cool party!
    // It there are more than 20 people coming but the girl - boy ratio is not 1-1
    //
    // It should print: Average party...
    // If there are less people coming than 20
    //
    // It should print: Sausage party
    // If no girls are coming, regardless the count of the people

    int girls;
    int boys;
    printf("girls:");
    scanf("%d", &girls);
    printf("boys:");
    scanf("%d", &boys);
    if (girls==0)
    {
        printf("Sausage party\n");
    }
    else if (girls==boys&&girls+boys>=20)
    {
        printf("The party is exellent!\n");
    }
    else if (girls+boys>=20)
    {
        printf("Quite cool party!\n");
    }
    else if (girls+boys<20)
    {
        printf("Average party...\n");
    }

    // Create a program that writes this line 100 times:
    // "I won't cheat on the exam!"

    for(int i=0; i<100;i++)
    {
        printf("%d I won't cheat on the exam!\n",i);
    }
    // Create a program that prints all the even numbers between 0 and 500
    for (int i=0;i<500;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    // Create a program that asks for a number and prints the multiplication table with that number
    //
    // Example:
    // The number 15 should print:
    //
    // 1 * 15 = 15
    // 2 * 15 = 30
    // 3 * 15 = 45
    // 4 * 15 = 60
    // 5 * 15 = 75
    // 6 * 15 = 90
    // 7 * 15 = 105
    // 8 * 15 = 120
    // 9 * 15 = 135
    // 10 * 15 = 150

    int num7=15;
    for(int i =1 ; i<11;i++)
    {
        printf("%d * %d = %d\n",i,num7,i*num7);

    }

    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5
    int num8;
    int num9;
    printf("num:");
    scanf("%d", &num8);
    printf("num:");
    scanf("%d", &num9);

    if (num9<num8)
    {
        printf("nop");
    }
    else
    {
        for(int i=num8; i<=num9; i++)
        {
            printf("%d\n",i);
        }
    }

    for (int i=1 ;i<100;i++)
    {
        if (i%3==0)
       {
           printf("Fizz\n" );
       }
        if (i%5==0)
       {
           printf("Buzz\n" );
       }
        else
          {
            printf("%d\n",i );
          }
    }



    return 0;



}
