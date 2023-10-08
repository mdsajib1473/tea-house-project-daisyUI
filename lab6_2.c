#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the size of your array\n");
    scanf("%d", &n);
    int arr[n], i;
    printf("Enter %d elements\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    printf("Sum is %d\n");

    return 0;
}