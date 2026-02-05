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
    map<int, string> mp = {{2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};
    vector<string> grid;
    vector<string> ans;
    void go(int idx, string cur)
    {
        if (idx == grid.size())
        {
            ans.push_back(cur);
            return;
        }

        for (auto &s : grid[idx])
        {
            cur += s;
            go(idx + 1, cur);
            cur.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return {};
        for (int i = 0; i < digits.size(); i++)
            grid.push_back(mp[digits[i] - '0']);

        go(0, "");
        return ans;
    }
};