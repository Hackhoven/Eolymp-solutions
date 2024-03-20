#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if( (a + b+ c) % 2)
    {
        printf("-1");
        return 0;
    }
    int balaca = fmin( fmin(a, b), c);
    int boyuk  = fmax( fmax(a,b), c);
    int orta = a + b+ c - balaca - boyuk;
    
    if ( (balaca + orta) == boyuk )
    {
        printf("0");
        return 0;
    }
    
    int index = 1;
    
    if( c == boyuk) index = 3;
    if( b == boyuk) index = 2;
    
    int cavab = orta - balaca;
    int fi = boyuk - cavab;
    fi /= 2;
    
    printf("%d\n", index);
    printf("%d %d", fi + cavab, fi);

    return 0;
}