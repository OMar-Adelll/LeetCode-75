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

const int Mod = 1000000007;
class Solution {
public:
    int numTilings(int n) {
        if (n == 1 || n == 2) return n;
        vector<int> dp(n + 1, 0);
        dp[0] = dp[1] = 1,dp[2] = 2;
        for (int i = 3; i <= n; i++) 
            dp[i] = ((2 * dp[i - 1]) % Mod + dp[i - 3] % Mod) % Mod;
        return dp[n];
    }
};