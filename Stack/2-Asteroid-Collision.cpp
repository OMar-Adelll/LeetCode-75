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
    vector<int> asteroidCollision(vector<int> &astr)
    {
        stack<int> st;
        for (auto &c : astr)
        {
            if (st.empty() || (st.top() < 0 && c < 0) ||
                (st.top() > 0 && c > 0) || (st.top() < 0 && c > 0))
            {
                st.push(c);
            }
            else
            {
                int enter = abs(c);
                while (!st.empty() && st.top() > 0 and enter > st.top())
                    st.pop();

                if (!st.empty() && st.top() == enter)
                {
                    st.pop();
                    continue;
                }
                if (st.empty() or st.top() < 0)
                    st.push(c);
            }
        }

        vector<int> ans;
        while (!st.empty())
            ans.push_back(st.top()), st.pop();
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
