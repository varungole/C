#include<stdio.h>

int main()
{
    /*
     FILE *fptr;
     fptr = fopen(filename, mode)
    
    */
   FILE *fptr;
   fptr = fopen("notes.txt" , "w");
   //fprintf(fptr, "some text");
   //fprintf(fptr, "\n Hi Varun, wagwan");
   char myString[100];
   while(fgets(myString, 100 , fptr))
   {
   printf("%s", myString);
   }
   fclose(fptr);

   return 0;
}