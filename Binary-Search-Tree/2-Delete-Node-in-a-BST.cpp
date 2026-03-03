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
private:
    void go(TreeNode *&node, int key)
    {
        if (!node)
            return;

        if (node->val < key)
        {
            go(node->right, key);
        }
        else if (node->val > key)
        {
            go(node->left, key);
        }
        else
        {
            if (!node->left && !node->right)
            {
                delete node;
                node = nullptr;

                return;
            }

            if (!node->left)
            {
                TreeNode *temp = node;
                node = node->right;
                delete temp;
            }
            else if (!node->right)
            {
                TreeNode *temp = node;
                node = node->left;
                delete temp;
            }
            else
            {
                TreeNode *trav = node->right;
                while (trav->left)
                    trav = trav->left;

                node->val = trav->val;
                go(node->right, trav->val);
            }
        }
    }

public:
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (!root)
            return nullptr;
        go(root, key);
        return root;
    }
};