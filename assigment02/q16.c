#include<stdio.h>
int main()
{
    int s1,s2,s3,mark,total;
    float average;
    printf("enter mark of subject 1:");
    scanf("%d",&s1);
     printf("enter mark of subject 2:");
     scanf("%d",&s2);
      printf("enter mark of subject 3:");
      scanf("%d",&s3);
      total = s1+s2+s3;
      average = total/3.0;
      printf(" total:%d",total);
      printf("\n average:%.2f",average );
      if(average > 80){
        printf("class:first class\n");
      }else if (average > 60){
        printf("class:second class\n");
      }else if(average >=35){
       printf("class :pass\n");
      }else{
        printf("clas :fail\n");
      }
    return 0;
}