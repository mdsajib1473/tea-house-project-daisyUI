#include <stdio.h>
int main()
{
    int n, i, max;
    printf("Enter the size of your array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Maximum element is %d\n");
    return 0;
}