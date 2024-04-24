#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ppb pop_back
#define s string
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map<int,int>
#define all(p) p.begin(), p.end()
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define ff first
#define ss second

int main()
{
s str="aabacbebebe";
int i=0,j=0,n=str.size(),ans=INT_MIN;
mp m;
while(j<n)
{
    m[str[j]]++;
    if(m.size()<3)
    {
        j++;
    }
    else if(m.size()==3)
    {
        ans=max(ans,j-i+1);
        j++;
    }
    else if(m.size()>3)
    {
        while(m.size()>3)
        {
            m[str[i]]--;
            if(m[str[i]]==0)
            m.erase(str[i]);
            i++;
        }
    }
    
}
cout<<ans<<endl;
return 0;
}