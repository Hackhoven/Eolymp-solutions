#include <stdio.h>
#include <math.h>

int main() {

    int n, m;

    scanf("%d %d", &n, &m);
    
    if( n % m !=0)
    {
        printf("%d %d", n / m, n % m);
    }
    
    else
    {
        printf("Divisible");
    }
    
    return 0;
}