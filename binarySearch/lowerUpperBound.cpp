#include<bits/stdc++.h>
using namespace std;
int lowerBound(int arr[],int n,int k)
{
    int high =(n-1),low=0,mid;
    int ans=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]>=k)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
int upperBound(int arr[],int n,int k)
{
    int high =(n-1),low=0,mid;
    int ans=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]<=k)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={2,3,5,5,5,6,6,7,9,13,13};
    int n=sizeof(arr)/sizeof(int);
    int lb=lowerBound(arr,n,10);
    int ub=upperBound(arr,n,5);
    cout<<lb<<ub;
return 0;
}

