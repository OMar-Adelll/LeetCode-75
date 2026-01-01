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
    bool closeStrings(string word1, string word2)
    {
        vector<int> f1(26, 0), f2(26, 0);
        for (auto &c : word1)
            f1[c - 'a']++;
        for (auto &c : word2)
            f2[c - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            if (f1[i] && !f2[i])
                return false;
            if (f2[i] && !f1[i])
                return false;
        }

        sort(all(f1)), sort(all(f2));
        return f1 == f2;
    }
};