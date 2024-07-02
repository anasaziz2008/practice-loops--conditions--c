#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int min = 1;
    int max = 100;

        int randomNum = rand() % (max - min + 1) + min;
        int input;

       do
        {
            printf("Enter your guess:");
            scanf("%d", &input);
            if(input == randomNum)
            {
                printf("correct\n");
                break;
            }
            else if(input > randomNum)
            {
                printf("lower\n");
            }
            else if(input < randomNum)
            {
                printf("higher\n");
            }
        }
        while(input != randomNum);

    return 0;
}
