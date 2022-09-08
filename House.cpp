
#include "House.h"
#include<string>
#include<iostream>

House::House()
{
    lot_number =0;
}
House::House(std::string ownerName, int lotNumber)
{
    house_user_name =ownerName;
    lot_number=lotNumber;
}

std::string House:: get_owner_name()
{
    return house_user_name;
}

int House:: get_lot_number()
{
    return lot_number;
}
House::~House()
{
}
