#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() 
{
    string input;
    cin >> input;

    stack<char> s;
    bool flag = true;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '(' || input[i] == '[' || input[i] == '{') 
        {
            s.push(input[i]);
        }
        else if (s.empty()) 
        {
            flag = false;
            break;
        } 
        else if ((input[i] == ')' && s.top() == '(') || (input[i] == ']' && s.top() == '[') || (input[i] == '}' && s.top() == '{')) 
        {
            s.pop();
        } 
        else 
        {
            flag = false;
            break;
        }
    }

    if (flag && s.empty()) 
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}