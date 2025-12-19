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
    string reverseVowels(string s) {
        auto vowel = [&](char x) -> bool {
            char y = tolower(x);
            return (y == 'a' or y == 'e' or y == 'i' or y == 'o' or y == 'u');
        };

        stack<char> st;
        for (auto& c : s)
            if (vowel(c))
                st.push(c);

        for (auto& c : s)
            if (vowel(c))
                c = st.top(), st.pop();

        return s;
    }
};