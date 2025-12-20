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
    int compress(vector<char> &chars)
    {
        int n = chars.size();
        vector<char> ans;

        auto into_ans = [&](int x)
        {
            string s = "";
            while (x > 0)
            {
                s += char(x % 10 + '0');
                x /= 10;
            }

            for (auto &c : s)
                ans.push_back(c);
        };

        int i = 0;
        while (i < n)
        {
            int cnt = 1;
            char x = chars[i];
            while (i + 1 < n && x == chars[++i])
                cnt++;

            ans.push_back(x);
            if (cnt > 1)
                into_ans(cnt);

            x = chars[i];
            cnt = 1;
        }

        return ans.size();
    }
};