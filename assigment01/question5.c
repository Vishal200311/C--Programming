#include<stdio.h>
int main()
{
    float a,b,am,hm;
    printf("enter the two number");
    scanf("%f%f",&a,&b);
    am =(a+b)/2;
    printf("arithmatic mean:%.2f\n",am);
    hm = a*b /(a+b);
    printf("harmonic mean:%.2f\n",hm);
    return 0;
    




}