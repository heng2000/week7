#include<iostream>
#include<string>
#include "House.h"
using namespace std;
int main ()
{
    House owner1;
    owner1=House("yuheng",90);
    cout<<owner1.get_lot_number()<<" and"<<owner1.get_owner_name()<<endl;
    return 0;
}