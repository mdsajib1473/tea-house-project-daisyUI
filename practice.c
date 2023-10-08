#include <stdio.h>
#include <math.h>
int main()
{
    int starting, ending;
    scanf("%d %d", &starting, &ending);

    if (starting > 12 && ending < 12)
    {
        printf("O JOGO DUROU %d HORA(S)\n", abs(abs(starting - 12) - (ending + 12)));
    }
    if (starting == 0 &&ending == 0 || starting == ending)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    if (starting < 12 && ending > 12)
    {
        printf("O JOGO DUROU %d HORA(S)\n", abs((starting + 12) - abs(ending + 12)));
    }

    return 0;
}