#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e5 + 5;
int dis[N];
int main()
{
    int v, e;
    cin >> v >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    for (int i = 0; i < v; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;

    for (int i = 1; i <= v - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;

            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    for (int i = 0; i < v; i++)
    {
        cout << dis[i] << " ";
    }
    return 0;
}