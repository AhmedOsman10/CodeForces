/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, y, total = 0;
    scanf("%d %d", &n, &k);
    y = 5 - k;
    int *numbers = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(numbers[i] <= y)
            total++;
    }
    
    printf("%d", total/3);

    return 0;
}