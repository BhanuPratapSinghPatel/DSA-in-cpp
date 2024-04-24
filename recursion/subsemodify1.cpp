#include<bits/stdc++.h>
using namespace std;
bool print(int ind,vector<int>&vec,vector<int>&temp,int s,int sum)
{
    int n=vec.size();
    if(ind==n)
    {
        if(s==sum)
        {
            // we are printing the entire sub-sequence
            // for(auto it:temp)
            // {
            //     cout<<it<<" ";
            // }
            // cout<<endl;
            // here it is printing indix of sub-sequence
            vector<int>:: iterator it;
            it=find(vec.begin(),vec.end(),temp[0]);
            int st=it-vec.begin();
            cout<<st+1<<" "<<st+temp.size()<<endl;
            return true;
        }
        return false;
    }
    temp.push_back(vec[ind]);
    s=s+vec[ind];
   if(print(ind+1,vec,temp,s,sum)==true)
   return true;
    s=s-vec[ind];
    temp.pop_back();
    if(print(ind+1,vec,temp,s,sum)==true)
    return true;
    return false;
}
int main()
{
    int n,sum;
    cin>>n;
    cin>>sum;
    vector<int>vec,temp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    print(0,vec,temp,0,sum);
return 0;

}