#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of your array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=n-1; i>=0; i--){
        printf("%d\t", arr[i]);
    }

    return 0;
}