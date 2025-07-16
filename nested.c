#include<stdio.h>
int main()
{
    int h,m,s;
    printf("enter the hours :");
    scanf("%d",&h);
    printf("wnter minutes :");
    scanf("%d",&m);
    printf("enter second :");
    scanf("%d",&s);
    if(h>=0 && h<24)
    {
    if(m>=0 && m<60)
    {
    if(s>=0 && s<60)
    printf ("time is valid");
    
    else printf("second is invalid");
 } 
    else printf("minute is invalid");
 
 } else printf("hours is invalid");

  
    
}