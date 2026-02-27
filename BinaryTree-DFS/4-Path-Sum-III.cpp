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
class Solution
{
public:
    long long dfs(TreeNode *node, long long cur, int tsum)
    {
        if (!node)
            return 0;

        cur += node->val;

        int cnt = 0;

        if (cur == tsum)
            cnt++;

        cnt += dfs(node->left, cur, tsum);
        cnt += dfs(node->right, cur, tsum);

        return cnt;
    }
    int pathSum(TreeNode *root, int tsum)
    {

        if (!root)
            return 0;

        return dfs(root, 0, tsum) + pathSum(root->left, tsum) + pathSum(root->right, tsum);
    }
};