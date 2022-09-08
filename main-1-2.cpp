#include<iostream>
#include<string>
#include "Subdivision.h"
using namespace std;
int main ()
{
    House owner1 =House("li",100);
    House owner2 =House("yuheng",100);
    House owner3 =House("weiguang",100);

    Subdivision s("asd",100);
    // s =Subdivision("qqq",5);
    if (!s.add_house(owner1))
    {
        cout<<"error"<<owner1.get_owner_name()<<owner1.get_lot_number()<<endl;
    }
    if (!s.add_house(owner2))
    {
        cout<<"error"<<owner2.get_owner_name()<<owner2.get_lot_number()<<endl;
    }
    if (!s.add_house(owner3))
    {
        cout<<"error"<<owner3.get_owner_name()<<owner3.get_lot_number()<<endl;
    }
    cout<<s.get_num_houses()<<s.get_subdiv_name()<<endl;
    return 0;
}