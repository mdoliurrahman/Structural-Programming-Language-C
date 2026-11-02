#include<stdio.h>
int main()

{
    // (+,-,*,/)
   int a,b;
   char choice;
   printf("Enter first number:");
   scanf("%d",&a);
   printf("Enter Second number:");
   scanf("%d",&b);
   printf("Enter your choice(+,-,*,/)");
   scanf("%c",&choice);
   switch(choice)
   {
    case '+': printf("Addition:%d",a+b);
              break;
    case '-': printf("Sub:%d",a-b);
             break;
    case '*': printf("multiplication:%d",a*b);
              break;
    case '/': printf("divition:%d",a/b);
              break;
   default: printf("check your input");

   }
   return 0;


}













