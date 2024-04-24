#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>&vec)
{
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>vec;
    vector<int>temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }    
        vec.push_back(temp);
        temp.clear();
    }
// for(int i=0;i<vec.size();i++)
// {
//     printvec(vec[i]);
// }
for(int i=0;i<vec.size();i++)
{
    for(int j=0;j<vec[i].size();j++)
    {
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}
return 0;

}