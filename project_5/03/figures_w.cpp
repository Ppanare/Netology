#include "figures_w.h"


void out(abstract_figure& ab)
{
    ab.print_info();
}

int main(){


    abstract_figure af(10,20,30,40,20,30,90,90);

    triangle trs(10,10,20,90,45,45);
    pr_triangle pr(10,20,30,60,70);
    rn_triangle rn(20,30,30,60,80);
    rv_triangle rvs(50);
    chetirehugolnik che(10,20,30,40,90,90,90,90);
    pryamougolnik pryam(10,10,20,20,90);
    kvadrat kvadr(50);
    parallelogram paral(10,20,10,20,40,50);
    romb rom(10,20,30);


    out(af);    std::cout<<std::endl;
    out(trs);     std::cout<<std::endl;
    out(pr);     std::cout<<std::endl;
    out(rn);    std::cout<<std::endl;
    out(rvs);    std::cout<<std::endl;
    out(che);    std::cout<<std::endl;
    out(pryam);    std::cout<<std::endl;
    out(kvadr);     std::cout<<std::endl;
    out(paral);     std::cout<<std::endl;
    out(rom);


}
