#include<bits/stdc++.h>
using namespace std;

const int N = 10e3 + 10;
vector<int> graph[N];
int main()
{
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < m; ++i){
        int v1, v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    for(int i = 1;  i<=n; ++i){
        for(int j = 0;  j<graph[i].size(); ++j){
            cout<<graph[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}

//Space Complexity O(n+m), where n is the number of vertices and m is the number of edges.