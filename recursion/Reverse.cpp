#include<bits/stdc++.h>
using namespace std;
void fn(int arr[],int i,int j)
{
    if(i>=j)
    return;
    // int temp=arr[i];
    // arr[i]=arr[j];
    // arr[j]=temp;
    swap(arr[i],arr[j]);
    fn(arr,i+1,j-1);
}

int main()
{
    int arr[6]={1,3,5,4,8,7};
    fn(arr,0,5);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}