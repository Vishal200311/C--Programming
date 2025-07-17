#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    printf("the previous character is : %c\n",ch - 1);
    printf("the next charcter is : %c",ch + 1);
    return 0;
}