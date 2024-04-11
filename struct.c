#include<stdio.h>

struct myStruct {
    int myNum;
    char myChar;
};

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

int main()
{
    struct myStruct s1;
    s1.myNum = 13;
    s1.myChar = 'B';

    printf("My number is %d\n and my char is %c\n" , s1.myNum , s1.myChar);
    return 0;
}