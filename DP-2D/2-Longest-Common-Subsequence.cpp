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
    string s, t;
    vector<vector<int>> dp;
    int go(int i, int j)
    {
        if (i >= s.size() || j >= t.size())
            return 0;

        int &ret = dp[i][j];
        if (~ret)
            return ret;

        int ans;
        if (s[i] == t[j])
        {
            ans = 1 + go(i + 1, j + 1);
        }
        else
        {
            if (i < s.size())
                ans = go(i + 1, j);
            if (j < t.size())
                ans = max(ans, go(i, j + 1));
        }

        return ret = ans;
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        s = text1, t = text2;
        dp.assign(s.size() + 1, vector<int>(t.size() + 1, -1));
        return go(0, 0);
    }
};