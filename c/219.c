#include <stdio.h>

int main() {
    
    long long h, w, l, k;
    scanf("%lld %lld %lld %lld", &h, &w, &l, &k);
    
    long long cavab = (h*w*l + k - 1) / k;
    
    printf("%lld", cavab);
    return 0;
}