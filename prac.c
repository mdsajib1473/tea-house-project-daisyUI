#include <stdio.h>

int main()
{
    int num, reverse = 0, r;
    scanf("%d", &num);
    int temp = num;

    while (temp != 0)
    {
        r = temp % 10;
        reverse = reverse * 10 + r;
        temp = temp / 10;
    }
    printf("%d", reverse);

    return 0;
}