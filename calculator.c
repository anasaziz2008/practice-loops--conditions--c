#include <stdio.h>

int main(void)
{
double int1, int2, result;
char operator;


printf("value 1: ");
scanf("%lf", &int1);

printf("enter operator (+ , - , * , /): ");
scanf(" %c", &operator);

printf("value 2: ");
scanf("%lf", &int2);

switch (operator)
{
    case '+':
        result = int1 + int2;
        printf("RESULT: %.2lf\n", result);
        break;

    case '-':
        result = int1 - int2;
        printf("RESULT: %.2lf\n", result);
        break;

    case '*':
        result = int1 * int2;
        printf("RESULT: %.2lf\n", result);
        break;

    case '/':
        if(int2 != 0){
            result = int1 / int2;
            printf("RESULT: %.2lf\n", result);
        }
        else
        {
            printf("Error");
        }
        break;

    default:
          printf("Error: Invalid operator\n");
        break;
}
}
