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

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> lpro(n, 1), rpro(n, 1);
        for (int i = 1; i < n; i++)
            lpro[i] = lpro[i - 1] * nums[i - 1];

        for (int i = n - 2; i >= 0; i--)
            rpro[i] = rpro[i + 1] * nums[i + 1];

        for (int i = 0; i < n; i++)
            nums[i] = lpro[i] * rpro[i];

        return nums;
    }
};