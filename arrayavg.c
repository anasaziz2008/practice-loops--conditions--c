#include <stdio.h>

int main(void)
{
    int arrsize;

    printf("Enter total inputs: ");
    scanf("%d", &arrsize);

    double array[arrsize];

    double total = 0;

    for(int i = 0; i < arrsize; i++)
    {
        printf("Enter Value %i: ", i+1);
        scanf("%lf", &array[i]);
        total = array[i] + total;
    }
    printf("%.2lf\n", total);

    double avg;
    avg = total / arrsize;
    printf("%.2lf\n", avg);
    
}
