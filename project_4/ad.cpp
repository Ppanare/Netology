#include "ad.h"

int main(){

std::fstream file;
file.open("in.txt");
int amount = 0;
file>>amount;
Information inf[amount];

for(int i = 0; i < amount; ++i){
    inf[i].set_information(file);
}
for(int i = amount - 1; i > -1; i--){
    std::cout<<inf[i].get_full_adress()<<std::endl;
}

std::sort(inf, inf + amount, [] (Information& ps, Information& gs){return ps.get_city_name() < gs.get_city_name() ? true : false;});
file.close();

std::ofstream out;
out.open("out.txt");
for(int i = 0; i < amount; ++i){
out<<inf[i].get_full_adress()<<std::endl;
}
out.close();
}
