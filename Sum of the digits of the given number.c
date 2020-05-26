#include<stdio.h>

int main() {
    
    int number, duplicate,sum=0, reverse=0;
    printf("Enter the number\n");
    scanf("%d",&number);

    //sum of the digits of a given number
    duplicate = number;
    while(duplicate){
        sum+=duplicate%10;
        duplicate/=10;
    }
    printf("\nThe sum of the digits of a given number is %d",sum);
}
