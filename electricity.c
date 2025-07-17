#include<stdio.h>
int main()
{
    int unit;
    float bill;
    printf("enter the unit : ");
    scanf("%d",&unit);
    if(unit>=100){
        bill = 100*8;
        unit -=100;
        if(unit>=100)
        {
            bill=bill+(unit*10);
            unit -=100;
            if(unit>=100){
                bill = bill + (unit *12);
                unit -= 100;
                if(unit>=100)
                {
                    bill = bill + (unit *15);
                    unit -= 100;
                    if (unit>=0)
                    {
                        bill = bill + (unit *20);
                        unit -= 100;
                    } else {
                        bill = bill+(unit *20);
                    }
                } else {
                    bill = bill +(unit *15);
                }
            } else {
                bill = bill +(unit * 12);
            }
        } else {
        bill = bill +(unit *10);
        }
       
    }else {
        bill = bill + (unit *8);
    }
    printf("enter bill : %.2f",bill);
    return 0;
}