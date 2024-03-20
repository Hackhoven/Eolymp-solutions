#include <stdio.h>

int main() {
    
    int num;
    scanf("%d", &num);
    
    int n = abs(num);
    
    printf("%d\n", n/100);
    printf("%d\n", (n - (n/100*100 + n%10))/10 );
    printf("%d", n%10);
    return 0;
}