//Write a program to check whether given number is divisible by 5 or 7? (with || 
//operator and with else if)
#include<stdio.h>
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    if(num %  5 == 0 || num % 7 == 0){
        printf("number is dividible by both 5 and 7",num);
    }else if(num % 5 == 0){
        printf("number is divisible by 5",num);

    }else if (num % 7 == 0){
        printf("number is divisible by 7",num);
    } else printf("number is not divisible by  both number 5 and 7 ",num);
    return 0;

}