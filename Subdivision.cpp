#include<string>
#include"Subdivision.h"
Subdivision::Subdivision()
{
    num_house =0;
    sub_size =0;
}
Subdivision::Subdivision(std::string subName, int size)
{
    sub_size =size;
    sub_name =subName;
    // array =new House [size];
}
int Subdivision:: get_num_houses()
{
    return num_house;
}
std::string Subdivision:: get_subdiv_name()
{
    return sub_name;
}
House *Subdivision:: get_houses()
{
    return array;
}
bool Subdivision:: add_house(House new_house)
{
    if (num_house>=sub_size)
    {
        array[num_house] =new_house;
        num_house++;
        return true;
    }else{
        return false;
    }
}
Subdivision::~Subdivision()
{
    // delete [] array;
}