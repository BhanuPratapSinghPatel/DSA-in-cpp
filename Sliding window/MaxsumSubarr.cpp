// maximum sum of k element in array
// vector => k element push karo or sath me add bhi karte raho
// Then mmax=max(ans,mmax) ek element front se remove or subtract karo and end se ek elem add karo
#include<bits/stdc++.h>
using namespace std;
int fn(vector<int>vec,int k)
{
    int j=0,i=0,sum=0,mmax=0,n=vec.size();
    while(j<n)
    {
        sum+=vec[j];
        if((j-i+1)<k)
        {
            j++;
        }
        else if((j-i+1)==k)
        {
            mmax=max(mmax,sum);
            sum=sum-vec[i];
            i++;
            j++;
        }
    }
    return mmax;
}
int main()
{
    vector<int>vec={2,3,6,7,2,3,8,0};
    cout<<fn(vec,3);
return 0;

}