#include<stdio.h>
int main()
{
    int id1,id2,id3,q1,q2,q3,p1,p2,p3;
    float price1,price2,price3;
    float discount,total_discount,total_price,pay_amount,discount_amount, total,discount_percentage;
    printf("\n enter id and price of product and quantity:");
    scanf("%d%d%f",&id1, &q1,&price1);
    printf("enter id and price of product and quantity:");
    scanf("%d%d%f",&id2,&q1,&price2);
    printf("enter id and price of product and quantity:");
    scanf("%d%d%f",&id3,&q1,&price3);

    if(total>=100000){
        discount_percentage =10;
    }else if(total>=80000){
        discount_percentage = 8;
    }else if (total>=50000){
        discount_percentage = 5;
    }else if("total>=30000"){
        discount_percentage = 2;
    }else discount_percentage = 0;
    discount_amount = (total * discount_percentage)/100;
    printf("discount amount:%.2f\n",discount_amount);
    pay_amount = total - discount_amount;
    printf("pay_amount:%.2f\n",pay_amount);
    return 0;

        
    


    }



