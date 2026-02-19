#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0)
        return 0;

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);

    return 0;
}
