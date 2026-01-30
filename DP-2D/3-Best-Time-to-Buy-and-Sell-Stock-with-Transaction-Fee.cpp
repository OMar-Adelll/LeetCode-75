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

#define OO 1e9
class Solution
{
public:
    int maxProfit(vector<int> &prices, int fee)
    {
        int n = prices.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, -OO));
        dp[n][0] = dp[n][1] = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            int M = 2;
            bool buy = false;
            while (M--)
            {
                if (buy)
                {
                    dp[i][buy] = max(dp[i][buy], -prices[i] + dp[i + 1][!buy]);
                }
                else
                {
                    dp[i][buy] =
                        max(dp[i][buy], prices[i] - fee + dp[i + 1][!buy]);
                }
                dp[i][buy] = max(dp[i][buy], dp[i + 1][buy]);
                buy = !buy;
            }
        }

        return dp[0][1];
    }
};