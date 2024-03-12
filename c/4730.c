#include <stdio.h>

int findFibo(int n)
{
    int fibo[50];

    fibo[0] = 1, fibo[1] = 1;

    for(int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    return fibo[n];

}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", findFibo(n));

    return 0;
}