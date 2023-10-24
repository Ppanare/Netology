#include <fstream>
#include <vector>
#include <iostream>




void openFileAndMoveToMassive(std::string nameOfFile,std::vector<int>&VectorOne,std::vector<int>&VectorTwo){
std::fstream file;
file.open(nameOfFile);
if(!file.is_open()){
    std::cerr<<"Invalid file\n";
}
int capacityForOne{0};
file>>capacityForOne;
for(int i = 0; i < capacityForOne; ++i)
{
    int buffer = 0;
    file>>buffer;
    VectorOne.push_back(buffer);
}
int capacityForTwo{0};
file>>capacityForTwo;
for(int i = 0; i < capacityForTwo; ++i){
    int buffer = 0;
    file>>buffer;
    VectorTwo.push_back(buffer);
}
file.close();
}

void outputMassiveForTest(std::vector<int>& someVector){
    for(auto& i : someVector){
        std::cout<<i<<"\t";
    }
}

void rotateVector(std::vector<int>& someVector,std::string direction){
    int CapacityOut = someVector.size();
    std::fstream file;
    file.open("out.txt");
    if(!file.is_open()){
        std::cerr<<"No output error";
    }
    if(direction == "left"){
        int j = 1;
    for(int i = 0; j < someVector.size(); ++i){
        std::swap(someVector.at(i),someVector.at(j));
        ++j;
    }
    }

    if(direction == "right"){
        int FcnElementBefore = someVector.size() - 1;  /// когда ты уже запомнишь
        for(int i = FcnElementBefore - 1; i > -1; i--){
            std::swap(someVector.at(i),someVector.at(FcnElementBefore));
            FcnElementBefore--;
        }
    }
}

void vectorOut(std::vector<int>&yourVector_one,std::vector<int>&yourVector_two,std::string nameOfFile){
    std::fstream output;
    output.open(nameOfFile);
    if(!output.is_open()){
        std::cerr<<"Invalid file";
    }
    output<<yourVector_one.size()<<std::endl;
    for(auto& i : yourVector_one){
        output<<i<<" ";
    }
    output<<std::endl;
    output<<yourVector_two.size()<<std::endl;
    for(auto& i : yourVector_two){
        output<<i<<" ";
    }
    output.close();

}


///ВРОДЕ ДОЛЖНО РАБОТАТЬ ЧУТЬ ЧУТЬ РУЧКАМИ ТЕСТИРОВАЛ


int main(){
std::vector<int>vectorOne;
std::vector<int>vectorTwo;
openFileAndMoveToMassive("in.txt",vectorOne,vectorTwo);
rotateVector(vectorOne,"left");
std::cout<<"\n";
rotateVector(vectorTwo,"right");
vectorOut(vectorTwo,vectorOne,"out.txt");
}
