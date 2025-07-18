// Write a program to check whether given number is divisible by 5 and 7? 
//(with && operator and with nested if) 
#include<stdio.h>
int main()
{
   int num;
   printf("enter number :");
   scanf("%d",&num);
   if(num % 5 == 0 && num % 7 == 0)
   {
    printf("number is divisible by both 5 and 7",num);
   }else if(num % 5 == 0){
    printf("number is dividible by 5",num);
   }else if(num % 7 == 0){
    printf("number us divisible by 7",num);
   } else {
    printf("number is not divisible by both 5 and 7 ",num);
   } return 0;
}
