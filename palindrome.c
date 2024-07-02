#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

char* reverse(const char *str)
{
    int len = strlen(str);
    char *reversed = (char *)malloc((len + 1) * sizeof(char));

    int i, j;
    for (i = 0, j = len - 1; i < len; ++i, --j)
    {
        reversed[i] = str[j];
    }
    reversed[len] = '\0';

    return reversed;
}

int main(void)
{
    char str[100];
    printf("Enter your word: ");
    scanf("%s", str);

    char* rev = reverse(str);
    printf("%s\n", rev);
    if(strcasecmp(str, rev) == 0)
    {
        printf("word is palindrome\n");
    }
    else
    {
        printf("word is not palimdrome\n");
    }

    return 0;
}
