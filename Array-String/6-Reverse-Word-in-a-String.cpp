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
    string reverseWords(string s)
    {
        vector<string> st;
        string word = "";
        for (auto &c : s)
        {
            if (isspace(c) && !word.empty())
                st.push_back(word), word.clear();
            else if (isspace(c))
                continue;
            else
                word += c;
        }
        if (!word.empty())
            st.push_back(word);

        string ans = "";
        for (int i = st.size() - 1; i >= 0; i--)
        {
            ans += st[i];
            if (i > 0)
                ans += ' ';
        }

        return ans;
    }
};