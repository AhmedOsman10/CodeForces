/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        int animals;
        scanf("%d", &n);
        animals = n % 4;
        if(animals == 0)
            printf("%d\n", n / 4);
        else
            printf("%d\n", (n / 4) + 1);
    }
}