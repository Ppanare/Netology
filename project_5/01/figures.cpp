#include "figures.h"

int main()
{
std::cout<<"Amount of sides\n";
Figure fg; Triangle trr; Square sq;
std::cout<<fg.get_name()<<": "<<fg.amount()<<std::endl;
std::cout<<trr.get_name()<<": "<<trr.amount()<<std::endl;
std::cout<<sq.get_name()<<": "<<sq.amount()<<std::endl;
}
