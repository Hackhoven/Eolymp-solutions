#include <stdio.h>
#include <math.h>

int main() {

    int x, y;

    scanf("%d", &x);
    
    if( x < 5)
    {
        y = x*x - 3*x + 4;
        printf("%d", y);
    }
    
    else
    {
        y = x + 7;
        printf("%d", y);
    }
    
    return 0;
}