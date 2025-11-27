#include<stdio.h>
int main()
{
    float length,breadth,area;
    printf("enter the length of rect:");
    scanf("%f", &length);
    printf("enter the breadth of rect:");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("area of rectangle : %.2f\n", area);
    return 0;
}
