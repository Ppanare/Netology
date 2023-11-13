#include "squares.h"
#include "triangles.h"

void output_tr(classic_triangle& cr)
{
    cr.information();
}

void output_sq(classic_square& sq)
{
    sq.information();
}

int main()
{
classic_triangle cr(10,20,20,90,10,80);
pr_triangle pr_t(10,30,40,80,10);
rb_triangle rb_t(10,20,30,50);
rv_triangle rv(30);
output_tr(cr);
output_tr(pr_t);
output_tr(rb_t);
output_tr(rv);

classic_square cs(10,10,20,20,90,90,90,45);
pryam_square ps(5,6);
sq_square sq(22);
pr_square pr(10,22,30,40);
rb_square rb(20,70,90);

output_sq(cs);
output_sq(ps);
output_sq(sq);
output_sq(pr);
output_sq(rb);
}
