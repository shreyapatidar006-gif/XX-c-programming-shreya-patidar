#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i, j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", a[j]);
        }

        printf("\n");
    }

    return 0;
}
