#include <stdio.h>
#include <math.h>

int findMax(int x, int y)
{
    if( x > y)
        return x;
    else
        return y;
}

int main() {

    int n1, n2, n3, n4;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    int leftMax = findMax(n1, n2);
    int rightMax = findMax(n3, n4);
    int MaxInFour = findMax(leftMax, rightMax);
    
    printf("%d", MaxInFour);
    
    return 0;
}