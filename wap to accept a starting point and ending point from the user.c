#include <stdio.h>
int main()
{
    int i=1,n=10;
    int spoint, epoint, even;
    printf("Enter starting point and ending point: ");
    scanf("%d%d", &spoint, &epoint);
    for (i=spoint; i<=epoint; i++)
    {
        if (i<=5)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}