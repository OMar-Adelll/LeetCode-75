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
    string mergeAlternately(string word1, string word2) {
        int m = word2.size(), n = word1.size(), idx1 = 0 ,idx2 = 0;
        bool fr = true;
        string ans = "";
        while(idx1 < n && idx2 < m)
        {
            if(fr) ans += word1[idx1++];
            else ans += word2[idx2++];
            fr = !fr;
        }

        while(idx1 < n) ans += word1[idx1++];
        while(idx2 < m) ans += word2[idx2++];
        return ans;
    }
};
