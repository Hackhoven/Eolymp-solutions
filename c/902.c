#include <stdio.h>
#include <math.h>

int main() {

    int n;

    scanf("%d", &n);
    
    if( n >= 1 && n <= 3)
    {
        printf("Initial");
    }
    
    else if (n >= 4 && n<= 6)
    {
        printf("Average");
    }
    
    else if (n >= 7 && n<= 9)
    {
        printf("Sufficient");
    }
    
    else if( n >= 10 && n <= 12)
    {
        printf("High");
    }
    
    return 0;
}