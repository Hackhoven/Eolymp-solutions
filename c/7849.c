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

    int minIndex = 0;
    for(int i = 0; i < n; i++)
    {
        if( array[minIndex] > array[i])
            minIndex = i; 
    }

    for(int i = 0; i < n; i++)
    {
        if ( array[i] == array[maxIndex] && maxIndex != minIndex)
            printf("%d ", array[minIndex]);
        else if ( array[i] == array[minIndex] && maxIndex != minIndex)
            printf("%d ", array[maxIndex]);
        else
            printf("%d ", array[i]);
    }

    return 0;
}