#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is maximum number",a);
    }else if(b>c && b>a ){
        printf("b is maximun number" ,b);
    }else printf("c is maximum number ",c);
    return 0;

}