#include <stdio.h>
#include <conio.h>
#define PI 3.1416

int main()
{
    float Radius, Area;
    printf("Enter the Radius Value : ");
    scanf("%f", &Radius);
    Area = PI*Radius*Radius;
    printf("Circle Area is = %.3f",Area);
    getch();
    return 0;
}
