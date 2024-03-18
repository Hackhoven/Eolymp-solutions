#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    double array[100];

    for(int i = 0; i < n; i++)
    {
        double x;
        scanf("%lf", &x);
        array[i] = fabs(x);
    }

    
    double max = array[0];
    for(int i = 0; i < n; i++)
    {
        if( max < array[i])
            max = array[i];
    }

    printf("%.2lf", max);

    return 0;
}
