#include "figures_w.h"

#define cringe std::cout<<std::endl;

void out(simple_triangle& gs)
{
    gs.print_info(gs.check());
}

void out_sq(simple_square& sq)
{
    sq.print_info(sq.check());
}

int main(){
    simple_triangle ps(10,10,10,30,30,100);
    out(ps);
    cringe
    pr_triangle pr(20,30,40,80,10);
    out(pr);
    cringe
    rb_triangle rb(10,20,60,80);
    cringe
    out(rb);
    rv_triangle rv(10);
    cringe
    out(rv);
    simple_square sq(30,40,10,60,90,90,90,90);
    cringe
    out_sq(sq);
    pr_square pr_SQ(10,20);
    cringe
    out_sq(pr_SQ);
    cringe
    kv_square kv(5);
    out_sq(kv);
    cringe
    par_square par(10,20,30,20);
    out_sq(par);
    cringe
    rom_square rom(30,10,20);
    out_sq(rom);
    //ну и духота

}
