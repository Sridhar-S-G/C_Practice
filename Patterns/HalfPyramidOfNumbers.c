/*

Input:
5

Output:
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

*/



#include<stdio.h>

int main(){
    int n_rows;
    printf("Enter number of Rows needed\n\n");
    scanf("%d",&n_rows);
    printf("\n");
    for(int i=1;i<=n_rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }printf("\n");
    }
    return 0;
}
