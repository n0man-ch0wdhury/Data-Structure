#include <stdio.h>

void bubble_sort_ascending(int arr[], int n)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){ // swap these two items
                arr[j] += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}

void bubble_sort_descending(int arr[], int n)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j + 1]){ // swap these two items
                arr[j] += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}


int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Before sorting: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    bubble_sort_ascending(a, n);
    printf("\nAfter sorting in ascending order: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\nAfter sorting in descending order: ");
    bubble_sort_descending(a, n);
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
