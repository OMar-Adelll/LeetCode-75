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
    int maxArea(vector<int> &nums)
    {
        int n = nums.size();
        int l = 0, r = n - 1, Max = 0;
        while (l <= r)
        {
            int left = nums[l];
            int right = nums[r];
            int M = min(left, right);
            int len = r - l;
            Max = max(Max, M * len);

            if (nums[l] > nums[r])
                r--;
            else
                l++;
        }

        return Max;
    }
};