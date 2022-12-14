#ifndef HOUSE_H
#define HOUSE_H
#include<string>

class House
{
    public:
    //
    std::string house_user_name;
    int lot_number;
    //
    House();  // a default constructor lot number is zero and owner name is an empty string ""
    House(std::string ownerName, int lotNumber);// a constructor that takes the lot number and house owner name
    std::string get_owner_name(); // returns the name of the house owner
    int get_lot_number();  // returns the house's lot number
    ~House(); //destructor
};
#endif
