#include<stdio.h>
int main()
{
    /*Program to print Fibonacci Series 0,1,1,2,3,5,8,13,...*/
    int n,n1=0,n2=1,n3,i=3;

    printf("Enter number to see sires: ");
    scanf("%d", &n);
    printf("Fibonacci Sires \n");
    printf("%3d%3d",n1,n2);

    do {
        n3 = n1 + n2;
        printf("%3d", n3);
        n1 = n2;
        n2 = n3;
        i++;
    } while(i <= n);

}

