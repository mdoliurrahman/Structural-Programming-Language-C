#include<stdio.h>
int main()
{
    int x=5;
    int *ptr=&x;
    printf("%d", *ptr);
    return 0;
}