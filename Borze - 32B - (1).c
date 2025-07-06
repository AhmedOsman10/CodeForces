#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = malloc(200);                 // Allocate memory for input string
    scanf("%s", str);             // Read string from user (stops at whitespace)

    char number[200];             // Array to store results
    int i = 0;

    while (*str != '\0')        // Loop until null terminator
    {
        
         if(*str == '.')
        {
            number[i] = 0;
        }
        else
        {
            str++;
            if(*str == '.')
            {
                number[i] = 1;
            }
            else
            {
                number[i] = 2;
            }
        }
        str++;
        i++;
    }

    for (int j = 0; j < i; j++)   // Print only valid values
    {
        printf("%d", number[j]);
    }

    return 0;
}
