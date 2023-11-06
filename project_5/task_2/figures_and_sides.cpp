#include "figures_and_sides.h"
#define cringe std::cout<<std::endl;
int main()
{
DefaultTriangle dft(10,10,10,10,90,60);
dft.print_information();
cringe
PRtriangle PRt(10,10,10,30,60);
PRt.print_information();
cringe
RBtriangle RBt(20,30,80,100);
RBt.print_information();
cringe
RStriangle RSt(10);
RSt.print_information();
cringe
ClassicSq Sq(10,20);
Sq.print_information();
cringe
Kvadrat kv(20);
kv.print_information();
cringe
PArallelogram PA(10,20,40,60);
PA.print_information();
cringe
ROmb Rb(10,30,40);
Rb.print_information();


}
