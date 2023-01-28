#include<stdio.h>
int main()
{
    printf("Enter values of length and breadth respectively");
    int l,b,area;
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("Area of rectangle having length %d and breadth %d is %d",l,b,area);
    return 0;
}