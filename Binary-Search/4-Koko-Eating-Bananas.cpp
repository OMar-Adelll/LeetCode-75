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

#define ll long long
class Solution
{
public:
    bool can(int mid, vector<int> &s, int h)
    {
        ll res = 0;
        for (int i = 0; i < s.size(); i++)
            res += (s[i] + mid - 1) / mid;

        return res <= h;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        sort(piles.begin(), piles.end());
        int l = 1, r = 1, ans = 0;
        while (!can(r, piles, h))
            r *= 2;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (can(mid, piles, h))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return ans;
    }
};