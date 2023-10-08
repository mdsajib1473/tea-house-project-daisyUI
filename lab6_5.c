#include <stdio.h>
int main()
{
    int n, i, search, flag=0;
    printf("Enter the size if your array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d", &search);
    for(i=0; i<n; i++){
        if(arr[i] == search){
            flag = 1;
            break;
        }
    }
    if(flag == 1) printf("Element found\n");
    else printf("Element not found\n");
    return 0;
}