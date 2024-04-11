#include<stdio.h>

int main()
{
    int myAge = 43;
    int* ptr = &myAge;

    printf("%d\n", myAge);
    printf("%p\n", &myAge);
    printf("%p\n", ptr);

    int numbers[5] = {1,2,3,4,5};
    int *ptr1 = &numbers;

    for(int i = 0 ; i < 4 ; i++)
    {
        *(numbers+i) = 5;
    }

    for(int i = 0 ; i < 4 ; i++)
    {
        printf("%d\n" , *(ptr1+i));
    }

}