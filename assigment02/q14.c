#include<stdio.h>
int main()
{
    float tax,bs; 
    printf("enter basic salary :");
    scanf("%f",&bs);
    if(bs<150000){
        tax=0;
    }else if(bs<150000) {
        tax = 0;
    }else if(bs <= 300000) {
        tax = 0.20 * bs;
    }else if(bs > 300000){
        tax = 0.30 *bs;
    }    
    printf("income tax:2.%f",tax);
    return 0;
}