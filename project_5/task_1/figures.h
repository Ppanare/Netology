#include <iostream>
#include <string>

class Figure{
protected:
  int sides;
  std::string name;
public:
    Figure (){
        this->sides = 0;
        name = "underfind figure";
    }
    int amount(){
        return sides;
    }
    std::string get_name(){
        return name;
    }
};

class Triangle : public Figure{
public:
Triangle(){
    this->sides = 3;
    name = "triangle";
}
};

class Square : public Figure{
public:
    Square(){
        this->sides = 4;
        name = "square";
    }
};
