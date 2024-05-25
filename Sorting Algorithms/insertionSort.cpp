#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; ++i){
        cin>>a[i];
    }

    for(int i = 1; i<n; ++i)
    {
        int tmp = a[i];
        int j = i-1;
        while(j>=0){
            if(a[j]>tmp){
                a[j+1] = a[j];
            }
            else{
                break;
            }
            --j;
        }
        a[j+1] = tmp;
    }
    // Printing
    for(int i = 0; i<n; ++i){
        cout<<a[i]<<" ";
    }
    return 0;
}

//Time Complexity O(n^2)