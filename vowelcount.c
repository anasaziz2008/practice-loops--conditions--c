#include <stdio.h>
#include <string.h>
#include <strings.h>
int main(void)
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    int vowel = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
        {
            vowel++;
        }
        else if(str[i] == 'e' || str[i] == 'E')
        {
            vowel++;
        }
         else if(str[i] == 'i' || str[i] == 'I')
        {
            vowel++;
        }
         else if(str[i] == 'o' || str[i] == 'O')
        {
            vowel++;
        }
         else if(str[i] == 'u' || str[i] == 'U')
        {
            vowel++;
        }
    }
    printf("Vowel: %i\n", vowel);
}
