#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    double array[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &array[i]);
    }
    
    double min = array[0];
    
    for(int i = 0; i < n; i++)
    {
        if(array[i] < min)
           min = array[i]; 
    }
    
    min *= 2;
    printf("%.2lf", min);

    return 0;
}