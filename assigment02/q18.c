#include<stdio.h>
int main()
{
    int days_late,fine;
    printf("enter the number of days book is late :");
    scanf("%d",&days_late);
    if(days_late <=0){
        fine =0;
    }else if(days_late < 5){
        fine = days_late *2;

    }else if(days_late<=10){
        fine = days_late * 5;
    }else {
        fine = days_late*10;
    }
    printf(" the fine is:%d",fine);
    return 0;

}