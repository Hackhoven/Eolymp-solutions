#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[100];

    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    int maxIndex = 0;
    for(int i = 0; i < n; i++)
    {
        if( array[maxIndex] < array[i])
            maxIndex = i; 
    }

    int maxIndex2 = -1;
    for(int i = 0; i < n; i++)
    {
        if(  (maxIndex2 == -1 || array[maxIndex2] < array[i]) &&   i != maxIndex )
            maxIndex2 = i; 
    }

    int cem = array[maxIndex2] + array[maxIndex];
    printf("%d", cem);

    return 0;
}