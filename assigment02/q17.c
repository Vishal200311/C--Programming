#include<stdio.h.>
int main()
{
    int q1,q2,q3;
    float r1,r2,r3,total,discount,final_amount;
    printf("enter quantity and rate of item 1:");
    scanf("%d %f",&q1,&r1);
    printf("enter quantity and rate of item 2:");
    scanf("%d %f",&q2,&r2);
    printf("enter quantity and rate of item 3:");
    scanf("%d %f",&q3,&r3);
    total = (q1*r1)+(q2+r2)+(q3+r3);
    if(total>10000){
        discount = total *0.20;
    }else if(total >= 8000){
        discount = total *0.15; 
    }else
    {
        discount = total * 0.08;
    } final_amount = total - discount;
    printf("total amount : %.2f",total);
    printf("discount:%.2f",discount);
    printf("final amount : %.2f",final_amount);
    return 0;

}