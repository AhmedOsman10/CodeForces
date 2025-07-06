/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        char s[4];
        scanf("%s", s);
        printf("%d\n", (s[0] + s[2] - 96));
    }

    return 0;
}