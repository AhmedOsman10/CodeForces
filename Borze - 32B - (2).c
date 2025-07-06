#include <stdio.h>

int main()
{
    char borzeCode[201];                         // Array to store the input Borze-encoded string (max 200 chars + null terminator)
    scanf("%200s", borzeCode);                   // Read input string safely (up to 200 characters)

    int codeIndex = 0;                           // Index used to traverse the borzeCode string

    // Loop through the encoded string until the null terminator is reached
    while (borzeCode[codeIndex] != '\0')         
    {
        if (borzeCode[codeIndex] == '.')         // If current character is '.', it represents digit 0
        {
            printf("0");                         // Output decoded digit
            codeIndex++;                         // Move to next character
        }
        else if (borzeCode[codeIndex] == '-' && borzeCode[codeIndex + 1] == '.')  
        {
            // If current character is '-' and the next one is '.', it represents digit 1 ("-.")
            printf("1");                         // Output decoded digit
            codeIndex += 2;                      // Skip both characters used in this symbol
        }
        else if (borzeCode[codeIndex] == '-' && borzeCode[codeIndex + 1] == '-')  
        {
            // If current character is '-' and the next one is also '-', it represents digit 2 ("--")
            printf("2");                         // Output decoded digit
            codeIndex += 2;                      // Skip both characters used in this symbol
        }
    }

    return 0;                                    // Exit the program
}
