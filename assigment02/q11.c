#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    if(a == b){
        printf("number is equal");
    }else if("a > b"){
        printf("a is grater than b");
    } else {
        printf("a is smaller than b ");
    
    }
    return 0;
}