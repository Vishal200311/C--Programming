 #include<stdio.h>
int main()
{
    float faharenite,celsius,kelvin,area;
    printf("enter the tempreture in faharenite (F):");
    scanf("%f",&faharenite);
    celsius= (5.0/9.0) *(faharenite - 32);
    printf("\n the temperature in celsius (c):%.2f\n",celsius);
    kelvin = (celsius + 273.15);
    printf(" the temperature in kelvin (K):%.2f\n",kelvin);
    return 0;
}