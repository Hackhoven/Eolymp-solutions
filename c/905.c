#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if ( a==b && b==c)
        printf("1");
    else if( a==b || a==c || b==c)
        printf("2");
    else
        printf("3");
    
    
    return 0;
}