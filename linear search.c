#include <stdio.h>

int linear_search(int x, int arr[], int n)
{
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    int i = - 1;
    return i;
}

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    int x;
    printf("Enter the number you want to search: ");
    scanf("%d", &x);
    int pos = linear_search(x, num, n);
    if(pos == -1){
        printf("%d was not fount in the array\n", x);
    }
    else{
        printf("%d was found at %d th position in the array\n", x, pos + 1);
    }
    return 0;
}
