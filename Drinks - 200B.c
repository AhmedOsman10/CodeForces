/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void cal(int *drinks, int n)
{
    float total = 0;
    for(int i = 0; i < n; i++)
    {
        total = (total + drinks[i]); 
    }
    
    printf("%.8f", total/n);
}

int main()
{
    int n;
    scanf("%d", &n);
    int *drinks = malloc(n  *sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &drinks[i]);
    }
    
    cal(drinks, n);

    return 0;
}