#include<bits/stdc++.h>
using namespace std;
vector<int> heap(vector<int>&vec,int k,vector<int>&sortt)
{
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<vec.size();i++)
    {
        pq.push(vec[i]);
        if(pq.size()>k)
        {
            sortt.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size())
    {
        sortt.push_back(pq.top());
        pq.pop();
    }
    // for(int i=0;i<sortt.size();i++)
    // {
    //     cout<<sortt[i]<<" ";
    // }
    return sortt;
}
int main()
{
    int k=3;
    int n;cin>>n;
    vector<int>sortt;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    heap(vec,k,sortt);
    for(int i=0;i<sortt.size();i++)
    {
        cout<<sortt[i]<<" ";
    }
return 0;

}