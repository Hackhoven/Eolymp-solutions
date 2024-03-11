#include <iostream>
using namespace std;

int main()
{

    long int i, w, s;
    long int m[100000];
    
    cin >> s;
    m[0] = 1;
    
    while (scanf("%li", &w) == 1)
    {
        for( i = s; i >= w; i--)
        {
            if ( m[i - w] == 1)
                m[i] = 1;
        }
        
    }
    
    for (i = s; i >= 0; i--)
    {
        if (m[i] > 0)
        break;
    }
    
    cout << i;

    return 0;
}