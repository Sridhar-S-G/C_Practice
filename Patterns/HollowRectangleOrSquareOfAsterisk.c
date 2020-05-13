/*

Input:
5
5

Output:

* * * * * 
*       * 
*       * 
*       * 
* * * * * 

Input:
5
7

Output:

* * * * * 
*       * 
*       * 
*       * 
*       * 
*       * 
* * * * * 


*/



#include<stdio.h>

int main(){
    int length,breadth;
    printf("Enter the length of the rectangle\n");
    scanf("%d",&length);
    printf("\nEnter the breadth of the rectangle\n");
    scanf("%d",&breadth);
    printf("\n");
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
