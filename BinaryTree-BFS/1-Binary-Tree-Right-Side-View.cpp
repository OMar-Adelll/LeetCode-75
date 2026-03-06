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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        if (!root)
            return {};

        queue<TreeNode *> pq;
        vector<int> ans;
        pq.push(root);
        while (!pq.empty())
        {
            int sz = pq.size();
            for (int i = 0; i < sz; i++)
            {
                TreeNode *node = pq.front();
                pq.pop();

                if (i == sz - 1)
                    ans.push_back(node->val);
                if (node->left)
                    pq.push(node->left);
                if (node->right)
                    pq.push(node->right);
            }
        }

        return ans;
    }
};