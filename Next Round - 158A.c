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
    int n = 0;
    int k = 0;
    int next_round = 0;
    
    scanf("%d", &n);
    scanf("%d", &k);
    int *participants = malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &participants[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        if(participants[i] >= participants[k - 1] && participants[i] > 0)
            next_round++;
    }
    
    printf("%d", next_round);

    return 0;
}