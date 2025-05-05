/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void cal(int *magnet, int n)
{
    int total = 1; // At least one group exists
    for(int i = 1; i < n; i++)
    {
        if(magnet[i] != magnet[i - 1])
        {
            total++;
        }
    }
    printf("%d\n", total);
    
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *magnet = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &magnet[i]);
    }
    
    cal(magnet, n);

    return 0;
}