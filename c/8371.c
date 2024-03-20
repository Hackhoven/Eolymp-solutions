#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    n % 2 == 0 ? printf("EVEN") : printf("ODD");
    return 0;
}