#include<stdio.h>
int main()
{
    int emp_id;
    float hr,tax,da,basic,take_home;
    printf("\n enter employee ID :");
    scanf("%d",&emp_id);
    printf("\n enter basic salary :");
    scanf("%f",&basic);
    printf("\n enter the dearness allownce: ");
    scanf("%f",&da);
    printf("\n enter the tax :");
    scanf("%f",&tax);
    hr = 0.10 * basic;
    da = 0.30 * basic;
    tax = 0.05 * basic;
    take_home = basic + hr + da -tax;
     printf("Employee ID      : %d\n", emp_id);
    printf("Basic Salary     : %.2f\n", basic);
    printf("House Rent  : %.2f\n", hr);
    printf("Dearness    : %.2f\n", da);
    printf("Tax        : %.2f\n", tax);

    printf("\n employee ID : %d",emp_id);
    printf("\n take home  salary: %.2f ",take_home);
    return 0;




}