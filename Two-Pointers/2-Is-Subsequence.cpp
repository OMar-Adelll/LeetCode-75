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
    bool isSubsequence(string s, string t)
    {
        int n = t.size(), m = s.size();
        int l = 0, r = 0;
        while (l < m && r < n)
        {
            if (t[r] == s[l])
                l++;
            r++;
        }

        if (l == m)
            return true;
        return false;
    }
};