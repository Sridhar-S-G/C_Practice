#include <stdio.h>

int main(void) {
	int year;
	printf("Enter a year\n");
	scanf("%d",&year);
	if((year%100!=0 && year%4==0) || year%400==0){
	    printf("\nThe year entered is a leap year");
	}else{
	    printf("\nThe year entered is not a leap year");
	}
	return 0;
}

