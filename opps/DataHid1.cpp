#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    private:
    int len;
    int bre;
    public:
    void setlen(int l)
    {
        len=l;
    }
    void setbre(int b)
    {
        bre=b;
    }
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
    // r1.len=14;
    // r1.bre=10;
    r1.setlen(14);
    r1.setbre(10);
    cout<<"Area is : "<<r1.area()<<endl;
    cout<<"Perimeter is : "<<r1.pri()<<endl;
    return 0;
}