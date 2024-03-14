#include <iostream>
#include<stack>
using namespace std;

int main()
{
    string input;
    int n;
    stack<int> s;

    while( cin >> input )
    {
        if ( input == "exit")
        {
            cout << "bye" << endl;
            break;
        }

        if( input == "clear" )
        {
            while( !s.empty())
                s.pop();
            cout << "ok" << endl;
        }
        
        if( input == "size" )
        {
            cout << s.size() << endl;
        }

        if( input == "back" )
        {
            cout << s.top() << endl;
        }

        if( input == "pop" )
        {
            cout << s.top() << endl;
            s.pop();
        }

        if( input == "push" )
        {
            cin >> n;
            s.push(n);
            cout << "ok" << endl;
        }
    }

    return 0;
}