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
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin() ,nums1.end()), s2(nums2.begin() , nums2.end());
        vector<int> v1, v2;
        for(auto& c : s1) if(!s2.count(c)) v1.push_back(c);
        for(auto& c : s2) if(!s1.count(c)) v2.push_back(c);
        return {v1, v2};
    }
};