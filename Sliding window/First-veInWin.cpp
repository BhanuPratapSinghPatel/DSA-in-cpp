#include<bits/stdc++.h>
using namespace std;
void fn(vector<int>vec,int k)
{
    int i=0,j=0;
    vector<int>temp;
    while(j<vec.size())
    {
         if(vec[j]<0)
            temp.push_back(vec[j]);
        if((j-i+1)<k)
        {
            j++;
        }
        else if(j-i+1==k)
        {
            if(temp.empty())
            cout<<"0"<<endl;
            else
            cout<<temp[0]<<endl;
            if(vec[i]<0)
            {
                temp.erase(temp.begin());
            }
            i++;
            j++;
        }
    }
}
int main()
{
    int k=3;
    vector<int>vec={12,-1,-7,8,-15,30,16,28};
    fn(vec,k);
return 0;
}