#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    string str1, str2;
    cin >> str1 >> str2;

    int n1 = str1.size();
    int n2 = str2.size();

    int dp[n1+1][n2+1];

    for (int i = 0; i <= n1; i++) 
    {
        for (int j = 0; j <= n2; j++) 
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
                
            else if (str1[i-1] == str2[j-1]) 
                dp[i][j] = dp[i-1][j-1] + 1;
                
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    string lcs = "";
    int i = n1, j = n2;

    while (i > 0 && j > 0) 
    {
        if (str1[i-1] == str2[j-1]) 
        {
            lcs = str1[i-1] + lcs;
            i--;
            j--;
        } 
        
        else if (dp[i-1][j] > dp[i][j-1]) 
            i--;
            
        else 
            j--;
    }

    cout << lcs << endl;

    return 0;
}