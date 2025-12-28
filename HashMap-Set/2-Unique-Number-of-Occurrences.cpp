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
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> s1(arr.begin() ,arr.end());
        map<int,int> f,ff;
        for(auto& c : arr) f[c]++;
        for(auto& [c , v] : f) ff[v]++;
        return ff.size() == s1.size();
    }
};