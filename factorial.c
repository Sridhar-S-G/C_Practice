#include <stdio.h>

int factorialOf(number){
    int factorial = 1;
    while(number){
        factorial*=number;
        number-=1;
    }
    return factorial;
}


int main(void) {
	
	int n;
	printf("Find factorial of \n");
	scanf("%d",&n);
	printf("\nThe factorial of %d is %d",n,factorialOf(n));
	return 0;
}

