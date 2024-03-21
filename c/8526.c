#include <stdio.h>
#include <math.h>

int main() {

    int x;
    double y;

    scanf("%d", &x);
    
    if( x < -4)
    {
        y = x + 5;
        printf("%.0lf", y);
    }
    else if ( x >= -4 && x <= 7)
    {
        y = x*x - 3*x;
        printf("%.0lf", y);
    }
    
    else
    {
        y = pow(x, 3) + 2*x;
        printf("%.0lf", y);
    }
    
    return 0;
}