#include<stdio.h>

int main(){
    int height,inc=1;
    printf("Enter the height of the diamond\n");
    scanf("%d",&height);
    for(int i=1;i<(height*2);i++){
        for(int j=1;j<=inc;j++){
            printf("* ");
        }printf("\n");
        if(i>=height)inc-=1;
        else inc+=1;
    }
    return 0;
}