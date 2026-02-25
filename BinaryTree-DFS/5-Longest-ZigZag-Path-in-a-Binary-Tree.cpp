// بسم الله الرحمن الرحيم
//  وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ
//  Free Palestine
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define i(x) (x - 'a')
#define nl '\n'
#define sz(x) (int)(x).size()
#define updmax(a, x) (a = max((a), (x)))
#define updmin(a, x) (a = min((a), (x)))
#define all(vec) (vec).begin(), (vec).end()

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

// 0 -> left
// 1 -> right
class Solution
{
public:
    int mx = 0;
    void dfs(TreeNode *node, int cur, bool dir)
    {
        if (!node)
            return;
        mx = max(mx, cur);
        dfs(node->left, dir ? cur + 1 : 1, 0);
        dfs(node->right, dir ? 1 : cur + 1, 1);
    }
    int longestZigZag(TreeNode *root)
    {
        dfs(root, 0, 0);
        dfs(root, 0, 1);

        return mx;
    }
};