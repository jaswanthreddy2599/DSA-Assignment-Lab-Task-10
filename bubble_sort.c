#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    if (scanf("%d", &n) != 1) return 0;
    int times[20]; 
    for (i = 0; i < n; i++) scanf("%d", &times[i]);

    bubbleSort(times, n);

    for (i = 0; i < n; i++) {
        printf("%d%s", times[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}
