#include<stdio.h>

int main(){
    int length,breadth;
    printf("Enter the length of the rectangle\n");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle\n");
    scanf("%d",&breadth);
    for(int i=0;i<breadth;i++){
        for(int j=0;j<length;j++){
            if(i==0 || j==0 || i==breadth-1 || j==length-1)
            printf("* ");
            else
            printf("  ");
        }printf("\n");
    }
    return 0;
}