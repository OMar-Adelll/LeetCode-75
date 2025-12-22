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
    void moveZeroes(vector<int>& nums) {
        int l = -1, r = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] == 0 and l == -1) {
                l = r;
            } 
            
            while(nums[r] != 0 && l != -1 && nums[l] == 0) {
                nums[l] = nums[r];
                nums[r] = 0;
                l++;
            }
        
        }
    }
};