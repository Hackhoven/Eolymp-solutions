#include <bits/stdc++.h>
using namespace std;

int main()
{


    int m;
    cin >> m;

    int a;
    vector<int> v;

    while (cin >> a){
        v.push_back(a);
    }

    vector<int> weights;
    vector<int> costs;

    int n;
    n = v.size()/2;

    for (int i = 0; i < n; i++){
        weights.push_back(v[i]);
    }

    for (int i = n; i < v.size(); i++){
        costs.push_back(v[i]);
    }

    int dp[n + 5][m + 5];

    for (int j = 0; j <= m; j++){
        dp[0][j] = 0;
    }

    for (int j = 1; j <= n; j++){
        dp[j][0] = 0;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (j < weights[i - 1])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weights[i - 1]] + costs[i - 1]);
        }
    }


    int cavab[n];
    int cnt = 0;

    int i = n, j = m;
    while (i > 0 && j > 0){
        if (dp[i][j] != dp[i - 1][j]){
            cavab[cnt] = i;
            cnt += 1;
            j -= weights[i - 1];
        }
        i--;
    }

    for (int i = cnt - 1; i >= 0; i--){
        cout << cavab[i] << endl;
    }

    return 0;
}