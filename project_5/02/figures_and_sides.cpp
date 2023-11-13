#include "figures_and_sides.h"

void output(abstract_figure& af)
{
    af.information();
}



int main()
{
    abstract_figure af(10,10,10,10,20,20,20,20);
    classic_triangle ct(20,20,20,90,80,70);
    pr_triangle pr(30,30,80,30,20);
    rb_triangle rb(40,40,30,60);
    rv_triangle rv(50);
    classic_square cs(60,70,80,90,10,20,20,30);
    pryam_square ps(20,30);
    sq_square sq(10);
    pr_square pr_s(20,30,40,60);
    rb_square rb_s(10,20,30);

    output(af); output(ct); output(pr); output(rb); output(rv); output(cs); output(ps); output(sq); output(pr_s); output(rb_s);
}
