#include <stdio.h>
#include <stdlib.h> 

// Function to find the index of the minimum element
int findMinIndex(int arr[], int size) {
    int minIndex = 0; 
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i; 
        }
    }
    return minIndex;
}

// Function to find the index of the maximum element
int findMaxIndex(int arr[], int size) {
    int maxIndex = 0;  
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;  
        }
    }
    return maxIndex;
}

int main() 
{
    int t;
    scanf("%d", &t);  // Read number of test cases
    
    while (t--)
    {
        int n, MaxEdge = 0, MinEdge = 0;
        scanf("%d", &n);  // Read number of stones
        int *arr = malloc(n * sizeof(int));  // Dynamically allocate array
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        // Find index of min and max elements
        int MinIndex = findMinIndex(arr, n);
        int MaxIndex = findMaxIndex(arr, n);
        // Calculate distance to closest edge (left or right) for max element
        MaxEdge = MaxIndex < n - 1 - MaxIndex ? MaxIndex : (n - 1 - MaxIndex);
        // Calculate distance to closest edge (left or right) for min element
        MinEdge = MinIndex < n - 1 - MinIndex ? MinIndex : (n - 1 - MinIndex);
        
        // Case 1: Max is closer to the edge than Min
        if(MaxEdge < MinEdge)
        {
            // Check if the gap between them is small enough to take one from one side and slide
            printf("%d\n", abs(MaxIndex - MinIndex) <= MinEdge ? MaxEdge + 1 + abs(MaxIndex - MinIndex) : MaxEdge + MinEdge + 2);
        }
        // Case 2: Min is closer or equal
        else
        {
            printf("%d\n", abs(MaxIndex - MinIndex) <= MaxEdge ? MinEdge + 1 + abs(MaxIndex - MinIndex) : MaxEdge + MinEdge + 2);
        }

        free(arr);  // Free allocated memory
    }
    
    return 0;
}
