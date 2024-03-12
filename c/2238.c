#include <stdio.h>

int main()
{
    int n, cem=0, count=0;
    scanf("%d", &n);

    int array[10001];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        cem += array[i];
    }

    double avg = (double) cem / n;
    for(int i = 0; i < n; i++)
    {
        if( array[i] > avg)
            count += 1;
    }

    printf("%d", count);

    return 0;
}