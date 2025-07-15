#include<stdio.h>
int main()
{
    float u,v,t,a,s;
    printf("print the  initial velocity(U):");
    scanf("%f",&u);
    printf("enter the final velocity (v):");
    scanf("%f",&v);
    printf("enter the accelaration(a):");
    scanf("%f",&a);
    printf(" enter the time(T):");
    scanf("%f",&t);
    printf("enter the dustance (s):");
    scanf("%f",&s);
    v=u+a*t;
    
    printf("final velocity (V):%.2f\n",v);
    printf("distance traveled (s):%.2f\n",s);
    return 0;

}   