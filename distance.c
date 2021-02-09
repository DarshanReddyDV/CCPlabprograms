#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,d,x,y;
    printf("Enter the x and y coordinates of first point\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter the x and y coordinates of the second point\n");
    scanf("%f %f", &x2, &y2);
    x=x2-x1;
    y=y2-y1;
    d=sqrt(pow(x,2)+pow(y,2));
    printf("The distance between the points is =%f",d);

}
