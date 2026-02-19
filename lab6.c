#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int value, pos;

    printf("Update at beginning, enter value: ");
    scanf("%d", &value);
    arr[0] = value;

    printf("Update at end, enter value: ");
    scanf("%d", &value);
    arr[n - 1] = value;

    printf("Update at position, enter position and value: ");
    scanf("%d %d", &pos, &value);
    if (pos >= 1 && pos <= n)
        arr[pos - 1] = value;

    printf("Updated array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
