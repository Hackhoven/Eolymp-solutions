#include <stdio.h>
#include <math.h>

int main() {

    int n, m;

    scanf("%d %d", &n, &m);
    
    int cavab = m / n;
    
    if( m % n != 0)
    {
        cavab++;
    }
    
    printf("%d", cavab);
    
    return 0;
}