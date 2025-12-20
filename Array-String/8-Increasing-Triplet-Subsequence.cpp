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
    bool increasingTriplet(vector<int> &nums)
    {
        int first = INT_MAX, second = INT_MAX;
        for (int n : nums)
        {
            if (n <= first)
                first = n;
            else if (n <= second)
                second = n;
            else
                return true;
        }
        return false;
    }
};