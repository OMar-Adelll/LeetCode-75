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
    int maxVowels(string s, int k)
    {
        auto vowel = [&](char x) -> bool
        {
            return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
        };

        int l = 0, r = 0, cnt = 0, mx = 0;
        for (; r < s.size(); r++)
        {
            cnt += vowel(s[r]);
            while (r - l + 1 > k)
                cnt -= vowel(s[l++]);

            mx = max(mx, cnt);
        }

        return mx;
    }
};