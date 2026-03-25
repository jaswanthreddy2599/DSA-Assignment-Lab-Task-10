#include <stdio.h>

int main() {
    int N, X, i;

  
    if (scanf("%d", &N) != 1) return 0;

    int arr[N];

    
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &X);

    int low = 0;
    int high = N - 1;
    int foundIndex = -1;

   
    while (low <= high) {
        
        int mid = low + (high - low) / 2;

        if (arr[mid] == X) {
            foundIndex = mid;
            break; 
        } else if (arr[mid] < X) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    if (foundIndex != -1) {
        printf("The target value %d is present at index %d\n", X, foundIndex);
    } else {
        printf("The target value %d is not present in the array\n", X);
    }

    return 0;
}
