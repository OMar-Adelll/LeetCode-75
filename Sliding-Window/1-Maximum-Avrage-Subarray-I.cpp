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
    double findMaxAverage(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n == 1)
            return (double)nums[0];

        double sum = 0, mxsum = -INT_MAX;
        int l = 0, r = 0;
        for (; r < n; r++)
        {
            sum += nums[r];
            if (r - l + 1 == k)
            {
                mxsum = max(mxsum, (double)sum / k);
                sum -= nums[l++];
            }
        }

        return (double)mxsum;
    }
};