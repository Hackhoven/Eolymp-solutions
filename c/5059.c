#include <stdio.h>
#include <limits.h>

int main()
{
    int n, a;
    scanf("%d", &n);

    int min1 = INT_MAX, min2 = INT_MAX;

    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a);

        if(a < min1) 
        {
            min2 = min1;
            min1 = a;
        } 
        else if(a < min2 && a != min1) 
        {
            min2 = a;
        }
    }

    printf("%d %d", min1, min2);

    return 0;
}