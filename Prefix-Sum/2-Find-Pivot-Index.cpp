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
    int pivotIndex(vector<int> &nums)
    {
        int sum = 0, prefix = 0;
        for (auto &num : nums)
            sum += num;
        for (int i = 0; i < nums.size(); i++)
        {
            prefix += i == 0 ? 0 : nums[i - 1];
            int r = sum - prefix - nums[i];

            if (r == prefix)
                return i;
        }

        return -1;
    }
};