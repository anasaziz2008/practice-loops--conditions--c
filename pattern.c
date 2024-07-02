#include <stdio.h>

int main(void)
{
    int input;
    printf("Input: ");
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
