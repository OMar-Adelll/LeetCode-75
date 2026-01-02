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
    string removeStars(string s)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
            {
                if (!ans.empty())
                    ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};