#include <stdio.h>
int search(int arr[], int n, int x) 
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x) 
        {
            return (i);
        }
    }
    return (-1);
}

int main (void) 
{
    int arr[] = {1, 10, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = search(arr, n, x);
    if (result == -1)
    {
        printf("out of the range");
    }
    else
    {
        printf("element index %d \n", result);
    }
}
