#include<stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    (num % 2 == 0)
        ? printf("number is even")
     : printf("number id odd ");
    return 0;
}