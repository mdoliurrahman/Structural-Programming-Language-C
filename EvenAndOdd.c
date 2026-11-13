#include<stdio.h>
int main(){
     int n;
     printf("Enter the number n:");
     scanf("%d", &n);
    for (int i=1; i<=n; i++){
    if(i%2==0){

        printf("Even number:%\n,i");

    }
     else if (i%2!=0){
    printf("odd number:\n",i);
    }
    }
return 0;
}










