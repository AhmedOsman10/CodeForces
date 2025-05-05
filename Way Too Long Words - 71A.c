#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printing(char **a, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(strlen(a[i]) <= 10)
        {
            printf("%s\n", a[i]);
        }
        else
        {
            int length = strlen(a[i]) - 2;
            printf("%c%d%c\n", a[i][0], length, a[i][length + 1]);
        }
    }
    
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    char **word = malloc(n * sizeof(char*));
    
    for(int i = 0; i < n; i++)
    {
        word[i] = malloc(100 * sizeof(char));
    }
    
     for(int i = 0; i < n; i++)
    {
        scanf("%s", word[i]);
    };
    
    printing(word, n);

    return 0;
}