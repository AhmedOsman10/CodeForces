#include <stdio.h>
#include <stdlib.h>

void cal(int n, long long int *a, long long int* b)
{
    for(int i = 0; i < n; i++)
    {
        long long int Remainder = a[i] % b[i];
        long long int result = (Remainder == 0) ? 0 : b[i] - Remainder;
        printf("%lld\n", result);
    }
}

int main()
{
   int n;
   scanf("%d", &n);
   long long int *a = malloc(n * sizeof(long long int));
   long long int *b = malloc(n * sizeof(long long int));
   for(int i = 0; i < n; i++)
   {
       scanf("%lld %lld", &a[i], &b[i]);
   }
   
   cal(n, a, b);
}