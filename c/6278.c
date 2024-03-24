#include <stdio.h>
#include <math.h>

int main() {

    int n1, n2;

    scanf("%d %d", &n1, &n2);
    
    if ( (n1 % 2 == 0 && n2 %2 == 0) || (n1 % 2 != 0 && n2 %2 != 0) ) 
    {
        printf("1");
    }
    
    else 
    {
        printf("0");
    }
    
    return 0;
}