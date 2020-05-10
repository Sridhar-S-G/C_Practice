#include<stdio.h>

int main(){
    int rows,val=0;
    printf("Enter number of rows needed\n");
    scanf("%d",&rows);
    printf("\n");
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",++val);
        }printf("\n");
    }
    return 0;
}