#include <stdio.h>
#include <string.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    
    int a;
    int array[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        array[i] = a;
    }
    
    for(int i = n-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}