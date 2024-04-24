#include<bits/stdc++.h>
using namespace std;
// void dfa(int node,vector<int>adj[],int vis[],vector<int>&ans)
// {
//     vis[node]=1;
//     ans.push_back(node);
//     for(auto it:adj[node])
//     {
//         if(!vis[it])
//         {
//             dfa(it,adj,vis,ans);
//         }
//     }
// }
// void dfaGraph(vector<int>adj[],int n)
// {
//     int vis[n+1]={0};
//     vector<int>ans;
//     int start=1;
//     dfa(start,adj,vis,ans);
//     for(auto it:ans)
//     {
//         cout<<it<<" ";
//     }
//}


void dfs(int start,int vis[], vector<int>&ans,vector<int>adj[])
{
    vis[start]=1;
    ans.push_back(start);
    for(auto it:adj[start])
    {
        if(vis[it]==0)
        {
            dfs(it,vis,ans,adj);
        }
    }
}
void dfsGraph(vector<int>adj[],int n)
{
    int vis[n+1]={0};  
    vector<int>ans;
    dfs(2,vis,ans,adj);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}
void AddEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    vector<int>adj[10];
    AddEdge(adj,1,2);
    AddEdge(adj,1,3);
    AddEdge(adj,2,4);
    AddEdge(adj,2,5);
    AddEdge(adj,3,6);
    AddEdge(adj,3,7);
    dfsGraph(adj,7);
return 0;
}