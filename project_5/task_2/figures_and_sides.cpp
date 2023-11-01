#include "figures_and_sides.h"

int main()
{
    Simple_triangle tr;
    tr.set_sides(5,6,7);
    tr.set_angles(40,60,80);
    tr.printT();

    R_triangle rt;
    rt.set_sides(8,9,10);
    rt.set_angles(10,90,80);
    rt.printT();

    Ra_triangle rag;
    rag.set_sides(5,5,5);
    rag.set_angles(50,60,60);
    rag.printT();

}
