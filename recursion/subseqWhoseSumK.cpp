#include<bits/stdc++.h>
using namespace std;
void print(int ind,vector<int>&vec,vector<int>&temp,int s,int sum)
{
    int n=vec.size();
    if(ind==n)
    {
        if(s==sum)
        {
            for(auto it:temp)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    temp.push_back(vec[ind]);
    s=s+vec[ind];
    print(ind+1,vec,temp,s,sum);
    s=s-vec[ind];
    temp.pop_back();
    print(ind+1,vec,temp,s,sum);
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