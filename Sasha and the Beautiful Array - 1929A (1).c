#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {               
        for (int j = 0; j < n - i - 1; j++) {      
            if (arr[j] > arr[j + 1]) {          
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, sum = 0;
        scanf("%d", &n);
        int *a = malloc(n * sizeof(int));
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        
        bubbleSort(a, n);
        
         for(int j = n-1; j > 0; j--)
         {
             sum = sum + a[j] - a[j-1];
         }
         
         printf("%d\n", sum);
    }

    return 0;
}