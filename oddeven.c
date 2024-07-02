#include <stdio.h>

int main(void)
{
    int input;
    printf("Number: ");
    scanf("%d", &input);

    if(input % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
