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
    vector<vector<int>> ans;
    vector<int> row;
    void go(int i, int cursum, int target, int k)
    {
        if (cursum > target || i > 10 || row.size() > k)
            return;

        if (cursum == target)
        {
            if (row.size() == k)
            {
                ans.push_back(row);
            }

            return;
        }

        row.push_back(i);
        go(i + 1, cursum + i, target, k);

        row.pop_back();
        go(i + 1, cursum, target, k);
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        go(1, 0, n, k);
        return ans;
    }
};