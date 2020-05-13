/*

Input: 
5

Output:
* 
* * 
* * * 
* * * * 
* * * * * 


*/


#include<stdio.h>

int main(){
    int n_rows;
    printf("Enter the number of Rows needed\n\n");
    scanf("%d",&n_rows);
    printf("\n");
    for(int i=1;i<=n_rows;i++){
        for(int j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}
