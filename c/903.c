#include <stdio.h>
#include <math.h>

int main() {

    int x, first, last;
    
    scanf("%d", &x);
    
    last = x % 10;
    
    while (x >= 10)
    {
        x /= 10;
    }
    
    first = x;
    
    if ( first > last)
        printf("%d", first);
    else if( last > first)
        printf("%d", last);
    else
        printf("=");
    
    return 0;
}