#include<bits/stdc++.h>
using namespace std;
int fn(vector<int>&vec,int k1)
{
    priority_queue<int>pq;
    for(int i=0;i<vec.size();i++)
    {
        pq.push(vec[i]);
        if(pq.size()>k1)
        {
            pq.pop();
        }
    }
    int x=pq.top();
    return x;
}
int main()
{
    int n,k1,k2;
    cin>>n>>k1>>k2;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        vec.push_back(x);
    }
    int a=fn(vec,k1);
    int b=fn(vec,k2);
    cout<<a<<" "<<b;
return 0;
}