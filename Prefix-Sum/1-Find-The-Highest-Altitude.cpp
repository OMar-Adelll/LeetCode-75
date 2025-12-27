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
    int largestAltitude(vector<int> &gain)
    {
        int prefix = 0, mx = prefix;
        for (int i = 0; i < gain.size(); i++)
        {
            prefix += gain[i];
            if (prefix > mx)
                mx = prefix;
        }

        return mx;
    }
};