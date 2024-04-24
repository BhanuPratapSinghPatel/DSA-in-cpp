#include<bits/stdc++.h>
using namespace std;

// #define ll long long
// #define pb push_back
// #define ppb pop_back
// #define vi vector<int>
// #define mp map<int,int>
// #define omp ordered_map<int,int>
// #define all(p) p.begin(), p.end()
// #define ff first
// #define ss second
// void Bfs(vi adj[],int n)
// {
//     int vis[n+1]={0};
//     vector<int>ans;
//     queue<int>q;
//     q.push(1);
//     vis[1]=1;
//     while(!q.empty())
//     {
//         int temp=q.front();
//         q.pop();
//         ans.push_back(temp);
//         for(auto it:adj[temp])
//         {
//             if(!vis[it])
//             {
//                 vis[it]=1;
//                 q.push(it);
//             }
//         }
//     }
//      for(int i=0;i<ans.size();i++)
//     {
//         cout<<ans[i]<<" ";
//     } 
// }
// void AddEdge(vector<int>adj[],int u,int v)
// {
//     adj[u].pb(v);
//     adj[v].pb(u);
// }
// int main()
// {
//     vector<int>adj[10];
//     AddEdge(adj,1,2);
//     AddEdge(adj,1,3);
//     AddEdge(adj,2,4);
//     AddEdge(adj,2,5);
//     AddEdge(adj,3,6);
//     AddEdge(adj,3,7);
//     Bfs(adj,7);
// return 0;
// }

void Bfs(vector<int>adj[], int n)
{
    int vis[n+1]={0};
    vector<int>ans;
    queue<int>q;
    q.push(1);
    vis[1]=1;
    while(!q.empty())
    {
        int top=q.front();
        q.pop();
        ans.push_back(top);
        for(auto it:adj[top])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);
            }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}

void AddEdge(vector<int>adj[],int u, int v)
{
    adj[u].push_back(v);  // 1->2 link karo
    adj[v].push_back(u);  // 2->1 link kar
}

int main()
{
    vector<int>adj[10];
    AddEdge(adj,1,2);
    AddEdge(adj,1,6);
    AddEdge(adj,2,3);
    AddEdge(adj,2,4);
   // AddEdge(adj,3,2);
    //AddEdge(adj,4,2);
    AddEdge(adj,4,5);
   // AddEdge(adj,5,4);
    AddEdge(adj,6,7);
   // AddEdge(adj,6,1);
    AddEdge(adj,6,9);
  //  AddEdge(adj,7,6);
    AddEdge(adj,7,8);
   // AddEdge(adj,8,7);
   // AddEdge(adj,1,2);
   // AddEdge(adj,9,6);
   Bfs(adj,9);
   return 0;
}





