#include<stdio.h>
int main()
{
    int l,b,h,area,volume;
    printf("enter the length of cuboid");
    scanf("%d",&l);
    printf("enter the bredth of cuboid");
    scanf("%d",&b);
    printf("enter the height of cuboid");
    scanf("%d",&h);
    printf("the surface of area :%d\n ",area);
    area =2* (l*b + l*h + b*h);
    printf("the surface of volume:%d",volume);
    volume = l*b*h;
    return 0;

}
