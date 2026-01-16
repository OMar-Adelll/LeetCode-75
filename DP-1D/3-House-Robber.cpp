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
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        vector<int> dp(n + 1, 0);
        dp[0] = nums[0];
        dp[1] = nums[1];
        for (int i = 2; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (i - j > 1)
                    dp[i] = max(dp[i], dp[j] + nums[i]);
            }
        }

        for (int i = 0; i < n; i++)
            cout << dp[i] << " ";

        return *max_element(dp.begin(), dp.end());
    }
};