#include <stdio.h>
#include <math.h>

int main() {

    int n, m, k, rooms;

    scanf("%d %d %d", &n, &m, &k);
    
    if ( n % k == 0 && m %k == 0)
        rooms = n/k + m/k;
    else if (n % k == 0 || m %k == 0)
        rooms = n/k + m/k + 1;
    else if (n % k != 0 && m %k != 0)
        rooms = n/k + m/k + 2;
    
    printf("%d", rooms);
    
    
    return 0;
}