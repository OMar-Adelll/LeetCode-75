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
    int equalPairs(vector<vector<int>> &grid)
    {
        int n = grid.size(), cnt = 0;
        map<vector<int>, int> freq;
        for (int i = 0; i < n; i++)
            freq[grid[i]]++;

        for (int i = 0; i < n; i++)
        {
            vector<int> col(n);
            for (int j = 0; j < n; j++)
            {
                col[j] = grid[j][i];
            }
            cnt += freq[col];
        }

        return cnt;
    }
};