#include <stdio.h>
#include <math.h>

int main() {

    int x;
    double y;

    scanf("%d", &x);
    
    if( x < 10)
    {
        y = x*x - 2*x + 4;
        printf("%.0lf", y);
    }
    
    else
    {
        y = pow(x, 3) + 5*x;
        printf("%.0lf", y);
    }
    
    return 0;
}