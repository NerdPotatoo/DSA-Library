#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> el;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        el.push_back({a, b});
    }
    // for(int i = 0; i<el.size(); i++)
    // {
    //     cout<<el[i].first<<" "<<el[i].second<<endl;
    // }
    for (pair<int, int> p : el)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}