#include<iostream>
using namespace std;
class coord
{
    public:
    float x,y;
    coord()
    {
        x=0;
        y=0;
    }
    coord operator >>(coord const &obj)
    {
        coord res;
        res.x=x+obj.x;
        res.y=y+obj.y;
    }
    coord operator << (coord const &obj)
    {
        cout<<obj.x<<", "<<obj.y<<endl;
    }
};
int main(){
coord c1,c2;
cout<<"Enter x&y of first point: "<<endl;
cin>>c1.x>>c1.y;
cout<<"ENter x&y of second point"<<endl;
cin>>c2.x>>c2.y;
cout<<"First point " <<c1.x<<" ,"<<c1.y<<endl;
cout<<"Second point " <<c2.x<<" ,"<<c2.y<<endl;
}