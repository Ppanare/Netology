#include "ad.h"




int main()
{

    std::ifstream fs;
    fs.open("in.txt");
    int amount_of_adres;
    fs>>amount_of_adres;
    Information* inf = new Information[amount_of_adres];


    for(int i = 0; i < amount_of_adres; i++){
        std::string cringe_one;
        std::string cringe_two;
        int cringe_tree;
        int cringe_four;
        fs>>cringe_one;
        fs>>cringe_two;
        fs>>cringe_tree;
        fs>>cringe_four;

        inf[i].set_adres(cringe_one,cringe_two,cringe_tree,cringe_four);
        inf[i].all_to_str();
    }
    fs.close();

    std::ofstream out;
    out.open("out.txt");
    out<<"ДО СОРТИРОВКИ"<<std::endl;
    out<<amount_of_adres<<std::endl;

    for(int i = amount_of_adres - 1; i > -1; i--){
    std::string hello = inf[i].get_full_adres();
    out<<hello<<std::endl;
    }

    out<<"После сортировки по адресу города"<<std::endl;
    out<<"|||||||||||||||||||||||||||||||||"<<std::endl;
    std::sort(inf,inf + amount_of_adres,[](Information& a, Information& b){return a.get_full_adres() > b.get_full_adres()? true:false; });

    for(int i = amount_of_adres - 1; i > -1; i--){
    std::string hello = inf[i].get_full_adres();
    out<<hello<<std::endl;
    }
    out.close();
    delete [] inf;
}
