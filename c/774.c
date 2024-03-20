#include <stdio.h>
#include <math.h>

int main() {

    double r, w, l;

    scanf("%lf %lf %lf", &r, &w, &l);
    
    double diaqonal = sqrt(l*l + w*w);
    
    if ( diaqonal <= 2*r)
        printf("YES");
    else
        printf("NO");
    
    
    return 0;
}