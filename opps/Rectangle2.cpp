#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    public:
    int len;
    int bre;
    int area()
    {
        return len*bre;
    }
    int pri()
    {
        return 2*(len+bre);
    }
};
int main()
{
    // Rectangle r1;
    // Rectangle *ptr;
    // ptr=&r1;
    // ptr->len=14;
    // ptr->bre=10;
    // cout<<"Area is : "<<ptr->area()<<endl;
    // cout<<"Perimeter is : "<<ptr->pri()<<endl;
    // return 0;
    Rectangle *ptr = new Rectangle;
    ptr->len=10;
    ptr->bre=12;
    cout<<"Area is : "<<ptr->area()<<endl;
    cout<<"Perimeter is : "<<ptr->pri()<<endl;
}