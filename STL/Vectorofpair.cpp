#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++)
    {
       int x,y;
       cin>>x>>y;
       vec.push_back({x,y});
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
 //   cout<<endl;
return 0;
}