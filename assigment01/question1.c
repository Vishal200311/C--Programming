#include<stdio.h>
int main()
{
    float radius, area, circumference, circle;
    printf("enter radius:");
    scanf("%f", &radius);
    area  = 3.14 * radius * radius;
    printf("area of circle : %f\n", area);
    circumference = 2*3.14;
    printf("circumference: %f\n",circumference);
    return 0;



}