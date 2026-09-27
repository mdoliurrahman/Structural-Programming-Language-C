#include<stdio.h>
int fun(int n)
{
    if(n==1) return 1;
    else return n*fun(n-1);
}
int main()
{
    int n=5;
    int fact=fun(n);
    printf("Factorial of %d is %d", n, fact);
    return 0;

}