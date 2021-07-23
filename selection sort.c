#include <stdio.h>

void insertion_sort_ascending(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
            if(min_idx != i){
                int temp = arr[i];
                arr[i] = arr[min_idx];
                arr[min_idx] = temp;
            }
        }
    }
}

void insertion_sort_descending(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[min_idx]){
                min_idx = j;
            }
            if(min_idx != i){
                int temp = arr[i];
                arr[i] = arr[min_idx];
                arr[min_idx] = temp;
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
    insertion_sort_ascending(a, n);
    printf("\nAfter sorting in ascending order: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\nAfter sorting in descending order: ");
    insertion_sort_descending(a, n);
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
