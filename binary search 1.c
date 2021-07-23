#include <stdio.h>

int binary_search_ascending(int l, int r, int x, int arr[])
{
    while(l <= r){
        int mid = (l + r) / 2;
        if(arr[mid] == x){
            return mid;
        }
        else if(x > arr[mid]){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return -1;
}

int binary_search_descending(int l, int r, int x, int arr[])
{
    while(l <= r){
        int mid = (l + r) / 2;
        if(arr[mid] == x){
            return mid;
        }
        else if(x > arr[mid]){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in descending order: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]); // input sorted array in descending order
    }
    int x;
    printf("Enter the element to search: ");
    scanf("%d", &x);
    int pos = binary_search_descending(0, n - 1, x, a);
    if(pos == -1){
        printf("%d was not found in the array\n", x);
    }
    else{
        printf("%d was found in the %d th position\n", x, pos + 1);
    }



    printf("Enter the elements in ascending order: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]); // input sorted array in ascending order
    }
    printf("Enter the element to search: ");
    scanf("%d", &x);
    pos = binary_search_ascending(0, n - 1, x, a);
    if(pos == -1){
        printf("%d was not found in the array\n", x);
    }
    else{
        printf("%d was found in the %d th position\n", x, pos + 1);
    }

    return 0;
}
