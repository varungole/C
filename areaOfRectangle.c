#include<stdio.h>


int main()
{
    /*
    int length;
    int breadth;
    length = 10;
    breadth = 11;

    printf("%d\n" , length*breadth);

    char myText[] = "Hello";
    printf("%s\n", myText);
    */

    float myNum = 3.5;
    printf("%lu\n", sizeof(myNum));

    float myFloat = 9;
    printf("%f\n", myFloat);

    float sum = (float) 5/2;
    printf("%f\n", sum);

    int test;


    int myAge = 24;
    printf("%p", &myAge);
    return 0;


}