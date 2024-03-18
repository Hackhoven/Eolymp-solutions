#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isTrue(const string& inp)
{
    stack<char> s;

    for( char c : inp)
    {
        if( c == '(' || c == '[')
            s.push(c);
        
        else if( c == ')')
        {
            if ( s.empty() || s.top() != '(' )
                return false;
            s.pop();
        }
        else if( c == ']')
        {
            if ( s.empty() || s.top() != '[' )
                return false;
            s.pop();
        }
    }

    return s.empty();
}


int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        string inp;
        getline( cin, inp);

        if ( isTrue(inp) )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}