#include<bits/stdc++.h>
using namespace std;
void print(int ind,vector<int>&vec,vector<int>&temp,int n)
{
    if(ind==n)
    {
       for(auto it:temp)
       {
            cout<<it<<" ";
       }
       if(temp.size()==0)
       {
           cout<<"{ }"<<endl;
       }
       cout<<endl;
       return;
    }
    temp.push_back(vec[ind]);
    print(ind+1,vec,temp,n);
    temp.pop_back();
    print(ind+1,vec,temp,n);
}
int main()
{
    int n;
    cin>>n;
    vector<int>vec,temp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    print(0,vec,temp,n);
return 0;
}