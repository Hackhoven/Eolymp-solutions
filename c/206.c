#include <stdio.h>
#include <math.h>

int main() {

    int k, w;
    
    scanf("%d %d", &k, &w);
    
    int a1, b1, a2, b2, a3, b3;
    scanf("%d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a3, &b3);
    
    if ((b1 >= k) && (a1 <= w)) 
        printf("YES");

    else if ((b2 >= k) && (a2 <= w)) 
        printf("YES");

    else if ((b3 >= k) && (a3 <= w)) 
        printf("YES");
    
    else if ((b1 + b2 >= k) && (a1 + a2 <= w))
        printf("YES");
    
    else if ((b1 + b3 >= k) && (a1 + a3 <= w)) 
        printf("YES");
    
    else if ((b2 + b3 >= k) && (a2 + a3 <= w)) 
        printf("YES");
    
    else if ((b1 + b2 + b3 >= k) && (a1 + a2 + a3 <= w)) 
        printf("YES");
    
    else
        printf("NO");
    
    return 0;
}