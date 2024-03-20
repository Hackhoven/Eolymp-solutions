#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {

    double a, b, c, x, y;
    
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &x, &y);
    
    int balaca_w = fmin( fmin(a, b), c);
    int boyuk_w = fmax( fmax(a,b), c);
    int orta_w = a + b + c - balaca_w - boyuk_w;
    
    if( x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    (balaca_w <= x && orta_w <= y) ? printf("YES") : printf("NO");

    return 0;
}