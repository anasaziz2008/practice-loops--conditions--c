#include <stdio.h>

int main(void)
{
    double marks;
    printf("Enter your marks: ");
    scanf("%lf", &marks);
    if(marks < 50)
    {
        printf("Grade: F\n");
    }
    else if(marks >= 50 && marks < 60 )
    {
        printf("Grade: E\n");
    }
     else if(marks >= 60 && marks < 70 )
    {
        printf("Grade: D\n");
    }
     else if(marks >= 70 && marks < 80 )
    {
        printf("Grade: C\n");
    }
     else if(marks >= 80 && marks < 90 )
    {
        printf("Grade: B\n");
    }
    else
    {
        printf("Grade: A\n");
    }
}
