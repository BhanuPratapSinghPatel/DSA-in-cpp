#include<bits/stdc++.h>
using namespace std;
bool fn(string str,int i)
{
  int n=str.size();
  if(i>=n/2)
  return true;
  if(str[i]!=str[n-i-1])
  return false;
  fn(str,i+1);
}
int main()
{
    string str;
    cin>>str;
    if(fn(str,0))
    {
    for(int i=0;i<str.size();i++)
    cout<<str[i]<<" ";
    cout<<"palindrome";
    }
    else
    cout<<"not palindrome";
  return 0;
}