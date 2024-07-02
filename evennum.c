#include <stdio.h>

int main(void)
{
    int total = 0;
    for(int i = 0; i <= 1000; i++)
    {
        if(i % 2 == 0)
        {
            total = i + total;
        }
    }
    printf("%i\n", total);

}
