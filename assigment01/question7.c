#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the number:");
    scanf("%d%d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf(" \n using: a = %d, b =%d",a,b);
        a = a+b;
        b = a-b;
        a = a-b;
        printf(" \n using + and - :%d,b = %d,a=%d ",a,b);
        if (a!=0 && b!=0) {
             a= a*b;
         b = a/b;
         a = a/b;
         printf("using * and / : a=%d,b=%d",a,b);
        } 
        else 
        {
            printf("\n cannot swipe using * and / when aor b is 0");

        }

       
        return 0;




    
}