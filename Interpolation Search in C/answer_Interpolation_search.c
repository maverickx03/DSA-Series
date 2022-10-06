#include<stdio.h>

int interpol_search(int arr[], int lb, int ub, int x)
{
    while ((arr[lb] != arr[ub]) && (x <= arr[ub]) && (x >= arr[lb])) {
        int pos = lb + (((ub - lb) / (arr[ub] - arr[lb])) * (x - arr[lb]));
        if (arr[pos] == x)
            return pos;
        if (arr[pos] < x)
            lb = pos + 1;
        else
            ub = pos - 1;
    }
    return -1;
}

int main()
{
    int arr[] = { 10, 20, 35, 45, 55, 68, 88, 91 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 68;
    int index = interpol_search(arr, 0, n - 1, x);
    if (index != -1)
        printf("Element %d is present at index %d", x, index);
    else
        printf("Element %d not found in the list!", x);

    return 0;
}