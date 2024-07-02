#include <stdio.h>

int main(void)
{
    double base, height, area;
    printf("Base: ");
    scanf("%lf", &base);

    printf("Height: ");
    scanf("%lf", &height);

    area = 0.5 * base * height;
    printf("Area: %.2f\n", area);
}
