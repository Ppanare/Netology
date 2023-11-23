#include <iostream>

class Fraction
{
    int numerator_;
    int demonimator_;
public:
Fraction(int numerator,int demonimator) : numerator_(numerator),demonimator_(demonimator){}
bool operator == (const Fraction& fraction) const
{
    double a = static_cast<double>(numerator_) / static_cast<double>(demonimator_);
    double b = static_cast<double>(fraction.numerator_) / static_cast<double>(fraction.demonimator_);
    if( a == b ) return true; else return false;
}
bool operator != (const Fraction& fraction) const
{
    double a = static_cast<double>(numerator_) / static_cast<double>(demonimator_);
    double b = static_cast<double>(fraction.numerator_) / static_cast<double>(fraction.demonimator_);
    if( a != b ) return true; else return false;
}
bool operator < (const Fraction& fraction) const
{
    double a = static_cast<double>(numerator_) / static_cast<double>(demonimator_);
    double b = static_cast<double>(fraction.numerator_) / static_cast<double>(fraction.demonimator_);
    if( a < b ) return true; else return false;
}
bool operator > (const Fraction& fraction) const
{
    double a = static_cast<double>(numerator_) / static_cast<double>(demonimator_);
    double b = static_cast<double>(fraction.numerator_) / static_cast<double>(fraction.demonimator_);
    if( a > b ) return true; else return false;
}
bool operator <= (const Fraction& fraction) const
{
    double a = static_cast<double>(numerator_) / static_cast<double>(demonimator_);
    double b = static_cast<double>(fraction.numerator_) / static_cast<double>(fraction.demonimator_);
    if( a <= b ) return true; else return false;
}
bool operator >= (const Fraction& fraction) const
{
    double a = static_cast<double>(numerator_) / static_cast<double>(demonimator_);
    double b = static_cast<double>(fraction.numerator_) / static_cast<double>(fraction.demonimator_);
    if( a >= b ) return true; else return false;
}
};



int main(){

    Fraction f1(11,13);
    Fraction f2(17,41);
    std::cout<<"F1"<<((f1 == f2) ? " == " : " not == ")<<"F2"<<"\n";
    std::cout<<"F1"<<((f1 != f2) ? " != " : " not != ")<<"F2"<<"\n";
    std::cout<<"F1"<<((f1 < f2) ? " < " : " not < ")<<"F2"<<"\n";
    std::cout<<"F1"<<((f1 > f2) ? " > " : " not > ")<<"F2"<<"\n";
    std::cout<<"F1"<<((f1 <= f2) ? " <= " : " not <= ")<<"F2"<<"\n";
    std::cout<<"F1"<<((f1 >= f2) ? " >= " : " not >= ")<<"F2"<<"\n";
}
