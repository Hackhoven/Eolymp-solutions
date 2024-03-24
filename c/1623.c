#include <stdio.h>
#include <math.h>

int main() {

    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);
    
    if( (n1 % 2 == 0 || n2 % 2 == 0 || n3 % 2 == 0) && (n1 % 2 != 0 || n2 % 2 != 0 || n3 % 2 != 0) ) 
    {
        printf("YES");
    }
    else
        printf("NO");
    
    return 0;
}