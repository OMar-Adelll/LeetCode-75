// بسم الله الرحمن الرحيم
//  وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ
//  Free Palestine
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(vec) (vec).begin(), (vec).end()
#define sz(x) (int)(x).size()
#define i(x) (x - 'a')
#define updmax(a, x) (a = max((a), (x)))
#define updmin(a, x) (a = min((a), (x)))
#define nl '\n'

class Solution
{
public:
    const int N = 505;
    int minDistance(string w1, string w2)
    {
        int n = w1.size(), m = w2.size();
        vector<vector<int>> dp(N, vector<int>(N, 0));
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == n)
                    dp[i][j] = m - j;
                if (j == m)
                    dp[i][j] = n - i;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                int &ret = dp[i][j];
                ret = 0;
                if (w1[i] == w2[j])
                {
                    ret = dp[i + 1][j + 1];
                    continue;
                }

                ret = 1 + min({dp[i + 1][j + 1], dp[i + 1][j], dp[i][j + 1]});
            }
        }

        return dp[0][0];
    }
};