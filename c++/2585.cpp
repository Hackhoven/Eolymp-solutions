#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int tmp = 0, length = 0;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;

        length += p; 

        if (length < 0)
            length = 0;  

        if (tmp < length) 
            tmp = length;
    }

    cout << tmp;

    return 0;
}