#include <stdio.h>
void sort(int arr[], int n, int i)
{
    if (i >= n) {
        return;
    }
    int min = arr[i];
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
        if (arr[j] < min) {
            min = arr[j];
            minIndex = j;
        }
    }
    if (minIndex != i) {
        arr[minIndex] = arr[i];
        arr[i] = min;
    }   
    sort(arr, n, i+1);
}
int main()
{
    int arr[] = { 0, 1, 2, 1, 0, 2, 1, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n, 0);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        
    }
    printf("\n%d ", n);
    return 0;
}
