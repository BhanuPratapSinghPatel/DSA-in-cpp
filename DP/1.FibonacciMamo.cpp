#include<bits/stdc++.h>
using namespace std;
int fn(int n, vector<int>&vis)
{
    if(n<=1)
    return n;
    if(vis[n]!=-1)
    return vis[n];
    return vis[n]=fn(n-1,vis)+fn(n-2,vis);
}
int main()
{
    int n=10;
    vector<int>vis(n+1,-1);
    cout<<fn(n,vis)<<endl;
    for(auto it:vis)
    {
        cout<<it<<" ";
    }
}