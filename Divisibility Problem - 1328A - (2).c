/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a, b;
    while(n--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", (a % b == 0) ? 0 : b - (a % b));
    }
}