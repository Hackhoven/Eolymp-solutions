#include <iostream>
#include<stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> s;

    
    for(int i = 0; i < n; i++)
    {
        int operation, number;
        cin >> operation;

        if ( operation == 1)
        {
            cin >> number;
            s.push(number);
        }
        else
        {
            cout << s.top() << endl;
            s.pop();
        }
            
    }

    return 0;
}