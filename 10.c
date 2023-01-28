#include<stdio.h>
float main()
{
    printf("Enter value of radius");
    float r,area;
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of circle having redius %f is %f",r,area);
    return 0;
}