#include <iostream>
using namespace std;
 class employee
 {
    public:
        int basic,hra,da,wages,hr,con;
        int regular()
        {
            int gross;
            gross=basic+hra+da;
            return(gross);
        }
        int daily()
        {
            return (wages*hr);
        }
        int consolidate()
        {
            return (con);
        }
 };

 int main()
    {
        employee e;
        cin>>e.basic>>e.hra>>e.da;
        cin>>e.wages>>e.hr>>e.con;
        cout<<"Regular Employee ="<<e.regular()<<endl;
        cout<<"Daily Wages = "<<e.daily()<<endl;
        cout<<"Consolidated"<<e.consolidate()<<endl;
    }