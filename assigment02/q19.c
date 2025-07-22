#include<stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet :");
    scanf(" %c",&ch);
    if(ch >='a' && ch <= 'z'){
        ch = ch-32;
        printf("uppercase : %c",ch);
    }else 
        printf("lowercase : %c",ch);
        return 0;
    }
