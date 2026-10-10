#include<stdio.h>

   struct myStructure{
     int myNumber;
     char myLetter;
     char myString[30];


   };

int main()
{
   struct myStructure s1;
     s1.myString = "Some text";

    printf("my string:%s",s1.myString);
      return 0;






}
