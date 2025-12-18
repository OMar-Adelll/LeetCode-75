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
    bool canPlaceFlowers(vector<int> &flowers, int k)
    {
        int n = sz(flowers);
        if (n == 1 && flowers[0] == 0 && k == 1 || k == 0)
            return 1;

        for (int i = 0; i < n; i++)
        {
            if (i == 0 && flowers[i] == 0)
            {
                if (n > 1 && flowers[i + 1] == 0)
                    k--, flowers[i] = 1;
            }
            else if (i == n - 1 && flowers[i] == 0)
            {
                if (n > 1 && flowers[i - 1] == 0)
                    k--, flowers[i] = 1;
            }
            else if (flowers[i] == 0 && flowers[i - 1] == 0 && flowers[i + 1] == 0)
            {
                k--, flowers[i] = 1;
            }

            if (k == 0)
                return true;
        }

        return false;
    }
};