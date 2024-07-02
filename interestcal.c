#include <stdio.h>

int main(void)
{
    double principle, rate, time, simpleinterest;
    printf("Enter your principle: ");
    scanf("%lf", &principle);

    printf("Enter your rate: ");
    scanf("%lf", &rate);

    printf("Enter your time(in years): ");
    scanf("%lf", &time);

    simpleinterest = (principle * rate * time) / 100;
    printf("Interest: %.2f\n", simpleinterest);
}
