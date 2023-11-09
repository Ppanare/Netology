#include "ad.h"

int main(){

std::fstream file;
std::ofstream outReverse;

outReverse.open("outReverse.txt");
file.open("in.txt");

int amount = 0;
file>>amount;
Information* inf = new Information[amount];

for(int i = 0; i < amount; ++i){
    inf[i].set_information(file);
}
for(int i = amount - 1; i > -1; i--){
    outReverse<<inf[i].get_full_adress()<<std::endl;
}

std::sort(inf, inf + amount, [] (Information& ps, Information& gs){return ps.get_city_name() < gs.get_city_name() ? true : false;});
file.close();

std::ofstream out;
out.open("out.txt");
for(int i = 0; i < amount; ++i){
out<<inf[i].get_full_adress()<<std::endl;
}
out.close();
outReverse.close();
delete [] inf;
}
