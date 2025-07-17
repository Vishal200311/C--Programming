#include<stdio.h>
int main()
{
    int unit;
    float bill; 
    printf("enter the unit:");
    scanf("%d",&unit);
    if(unit<=100){
         bill = unit *10;
    } else if( unit<=200){
        bill = 100*10 + (unit -100) *12;
    }else if ( unit<=300){
        bill = 100 *10 + 100*12 +(unit -200) *15;
    }else if (unit<=500){
        bill = 100*10+100*12+100*15+(unit-300)*20;
    }else
    bill = 100 *10 + 100 * 12 +100* 15 + (unit-300)*20;
     printf("bill :%.2f",bill);
    return 0;
}