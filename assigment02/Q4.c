#include<stdio.h>
int main()
{
    float cost_price,selling_price,price,profit,loss,amount,equal;
    printf("enter the cost price :");
    scanf("%f",&cost_price);
    printf("enter the selling price:");
    scanf("%f",&selling_price);
    if(cost_price >selling_price){
       loss =   cost_price - selling_price;
        printf("loss\n");
        
        printf("loss amount :%.2f",loss);
    }else
     if(selling_price > cost_price){
        profit = selling_price - cost_price ;
        printf("profit\n");
        
        printf("profit amount :%.2f",profit);
    }else
    printf("prices are equal no profit no loss\n");
    return 0;
    
}