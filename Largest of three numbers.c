#include<stdio.h>

int main() {
    int n1,n2,n3;
    printf("Enter any 3 numbers with a space in between them\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2)
    n1>n3 ? printf("\n%d",n1) :  printf("\n%d",n3);
    else n2>n3 ? printf("\n%d",n2) : printf("\n%d",n3);
}
