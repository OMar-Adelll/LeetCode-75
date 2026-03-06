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

class Solution
{
public:
    void dfs(int node, vector<bool> &vis, vector<vector<int>> adj)
    {
        vis[node] = true;
        for (auto ch : adj[node])
        {
            if (!vis[ch])
            {
                dfs(ch, vis, adj);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        int n = rooms.size(), cnt = 0;
        vector<bool> vis(n, false);
        dfs(0, vis, rooms);
        return accumulate(vis.begin(), vis.end(), 0) == n;
    }
};