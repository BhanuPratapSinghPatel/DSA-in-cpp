#include<bits/stdc++.h>
using namespace std;
vector<int> fn(vector<int>&nums,int k,vector<int>&ans)
{
    unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        } 
        //for(auto it:mp)
        // {
        //     cout<<it.first<<" => "<<it.second;
        // }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto it:mp)
        {
            pq.push({(it.second),(it.first)});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        while(pq.size())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        for(auto it:ans)
        {
            cout<<it;
        }
        // return ans;
}
int main()
{
    int k,n;
    cin>>n>>k;
    vector<int>vec,ans;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    fn(vec,k,ans);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;

}