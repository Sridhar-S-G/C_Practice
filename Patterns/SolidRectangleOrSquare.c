#include<stdio.h>

int main(){
    int length,breadth;
    printf("Enter the length\n");
    scanf("%d",&length);
    printf("Enter the breadth\n");
    scanf("%d",&breadth);
    for(int i=0;i<breadth;i++){
        for(int j=0;j<length;j++){
            printf("* ");
        }printf("\n");
    }
    return 0;
}