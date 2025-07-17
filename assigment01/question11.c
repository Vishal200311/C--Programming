#include<stdio.h> 
int main()
{
    float l ,b,h;
    float d_l,d_w,d_h,w_w,w_h,w_l,w_b,d_b;
    float dimension,wall_area,door_area,windows_area, painted_area,whitewash_area;
    printf("enter room length and bredth and height:");
    scanf("%f%f%f",&l,&b,&h);
    printf("enter the windows length and bredth :");
    scanf("%f%f",&w_l,&w_b);
    printf("enter the door length and bredth :");
    scanf("%f%f",&d_l,&d_b);
    wall_area =  2 * (l+b) *h;
    door_area = d_l*d_b;
    windows_area = 2 * (w_w *w_h);
    painted_area = wall_area - door_area -windows_area;
    whitewash_area = l*b;
    printf("area be painted (interior wall): %.2f square meter\n",painted_area);
    printf("area be whitewashed (roof): %.2f square meter \n");
    return 0;
}



    
    
