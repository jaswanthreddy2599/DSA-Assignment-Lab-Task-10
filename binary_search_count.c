#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, ans = 0;
    if (scanf("%d", &n) != 1) return 0;
    int arr[10]; 
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] <= key) {
            ans = mid + 1;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d\n", ans);
    return 0;
}
