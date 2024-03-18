#include <iostream>
using namespace std;

int main() 
{
    long long int n, a, b;
    cin >> n >> a >> b;
    
    long long int min, max;
    long long int answer = 0;
    
    if (a <b) 
    {
        min = a;
        max = b;
    } 
    
    else 
    {
        min = b;
        max = a;
    }
    
    if ( n % 2 == 0)
        answer = (min + max) * n/2;
    else
        answer = max *(n+1)/2  +  min *(n - 1)/2;

    cout << answer;
    
    return 0;
}