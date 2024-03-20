#include <stdio.h>

int findMin(int x, int y)
{
    if ( x< y)
        return x;
    else
        return y;
}

int main() {
    int t1, t2, t3;
    
    scanf("%d %d %d", &t1, &t2, &t3);
    
    int cavab = findMin(t1, t2);
    if(t3 < cavab)
        cavab = t3;
        
    printf("%d", cavab);

    return 0;
}