#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);


    for(i = 0; i < n-1; i++)
    {
        for(j = n-1; j > i; j--)
            printf(" ");

        for(j = 0; j < 2*i+1; j++)
            printf("*");

        puts("");
    }

    for(i = n; i > 0; i--)
    {
        for(j = n; j > i; j--)
            printf(" ");

        for(j = 0; j < 2*i-1; j++)
            printf("*");

        puts("");
    }
    return 0;
}

