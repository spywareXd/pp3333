#include<iostream>
using namespace std;
class base
{
    public:
        int n;
        void operator ++()
        {
            n++;
            n++;
        }
        void operator --()
        {
            n--;
            n--;
        }
        void disp()
        {
            cout<<n;
        }
};
int main()
{
    base b;
    cin>>b.n;
    char a;
    cin>>a;
    if(a=='+')
    {
        ++b;
    }
    else if(a=='-')
    {
        --b;
    }
    b.disp();
    return 0;
}
