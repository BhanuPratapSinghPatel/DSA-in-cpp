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
    Rectangle r1;
    r1.len=14;
    r1.bre=10;
    cout<<"Area is : "<<r1.area()<<endl;
    cout<<"Perimeter is : "<<r1.pri()<<endl;
    return 0;
}