#include<stdio.h>

int main() {
    
    int number, duplicate,sum=0, reverse=0;
    printf("Enter the number\n");
    scanf("%d",&number);
    //Reverse of the given number
    duplicate = number;
    while(duplicate){
        reverse=(reverse * 10) + (duplicate%10);
        duplicate/=10;
    }printf("\nThe reverse of the given number is %d",reverse);
    
    //Palindrome or not
    number == reverse ? printf("\nThe given number is palindrome") : printf("\nThe given number is not a palindrome");
    
}
