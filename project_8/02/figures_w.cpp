#include "figures_w.h"

void output(Figure& fq)
{
    fq.print_info();
}

int main(){
try{
IsoscelesTriangle isoscelesTriangle(30,140,30,10,20,30);
output(isoscelesTriangle);
RightTriangle rightTriangle(30,60,10,20,30);
output(rightTriangle);
Triangle triangle(90,10,80,20,30,40);
output(triangle);

} catch (const std::exception& e){
    std::cerr<<"Exception: "<<e.what()<<std::endl;
}
}
