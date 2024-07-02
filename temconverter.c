#include <stdio.h>

int main(void)
{
    double celsius, farenheit;
    printf("Celsius: ");
    scanf("%lf", &celsius);
    farenheit = (celsius * 9 / 5) + 32;
    printf("Farenheit: %.2lf\n", farenheit);
return 0;
}
