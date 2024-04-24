#include<bits/stdc++.h>
using namespace std;
void sort(vector<int>&vec)
{
    int n=vec.size();
     int low=0 ,mid=0,high=(n-1);
     while(high>=mid)
     {
        if(vec[mid]==0)
        {
            swap(vec[mid],vec[low]);
            mid++;
            low++;
        }
        else if(vec[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(vec[mid],vec[high]);
            high--;
        }
     }

}
void display(vector<int>&vec)
{
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<"Enter the size of vector"<<endl;
    int n;cin>>n;
    vector<int>vec;
    cout<<"Enter the element of vector with 0,1,2"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    display(vec);
    sort(vec);
    display(vec);
return 0;

}