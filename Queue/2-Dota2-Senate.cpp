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
    string predictPartyVictory(string s)
    {
        int n = s.size();
        queue<int> r, d;
        for (int i = 0; i < n; i++)
            if (s[i] == 'R')
                r.push(i);
            else
                d.push(i);

        while (!r.empty() && !d.empty())
        {
            int xr = r.front();
            int xd = d.front();

            if (xr > xd)
                d.push(n);
            else
                r.push(n);

            n++;
            r.pop(), d.pop();
        }

        return (r.empty() ? "Dire" : "Radiant");
    }
};