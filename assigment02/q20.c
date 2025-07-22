#include<stdio.h>
int main()
{
    char ch;
    printf("enter anything :");
    scanf("%c",&ch);
    if(ch>= 97 && ch<=122){
        printf(" lowercase");
    }if(ch>=65 && ch<=90){
        printf(" uppercase");
    }if(ch>=48 && ch<=58){
        printf("digit");
    }else {
        printf("special charcter ");
    }
    return 0;
}