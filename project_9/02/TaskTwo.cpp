#include <iostream>

class Fraction
{
    int numerator_;
    int demonimator_;
public:
Fraction();
Fraction(int numerator,int demonimator) : numerator_(numerator),demonimator_(demonimator){}
bool operator == (const Fraction& fraction) const
{
    double a = static_cast<double>(numerator_) / static_cast<double>(demonimator_);
    double b = static_cast<double>(fraction.numerator_) / static_cast<double>(fraction.demonimator_);
    if( a == b ) return true; else return false;
}

std::string transformIntegers()
{
    double a = static_cast<double>(numerator_);
    double b = static_cast<double>(demonimator_);
    double c = a / b;
    return std::to_string(c);
}

std::string print_full()
{
    return std::to_string(numerator_) + "/" + std::to_string(demonimator_);
}

Fraction operator+ (const Fraction& fraction) const
{
    return Fraction{numerator_ + fraction.numerator_,demonimator_ + fraction.demonimator_};
}

Fraction operator- (const Fraction& fraction) const
{
    return Fraction{numerator_ - fraction.numerator_,demonimator_ - fraction.demonimator_};
}

Fraction operator* (const Fraction& fraction) const
{
    return Fraction{numerator_ * fraction.numerator_,demonimator_ * fraction.demonimator_};
}

Fraction operator/ (const Fraction& fraction) const
{
    return Fraction{numerator_ / fraction.numerator_,demonimator_ / fraction.demonimator_};
}

Fraction& operator++()
{
    numerator_+=1;
    demonimator_+=1;
    return *this;
}

Fraction& operator--()
{
    numerator_-=1;
    demonimator_-=1;
    return *this;
}

Fraction operator++(int)
{
    Fraction fraction{numerator_,demonimator_};
    ++numerator_;
    ++demonimator_;
    return fraction;
}

Fraction operator--(int)
{
    Fraction fraction{numerator_,demonimator_};
    --numerator_;
    --demonimator_;
    return fraction;
}
};



int main(){

    Fraction f1(4,5);
    Fraction f2(7,10);
    std::cout<<f1.print_full()<<" = "<<f1.transformIntegers()<<std::endl;
    std::cout<<f2.print_full()<<" = "<<f2.transformIntegers()<<std::endl;
    std::cout<<"operator+ " << (f1 + f2).print_full()<<std::endl;
    std::cout<<"operator- " << (f1 - f2).print_full()<<std::endl;
    std::cout<<"operator* " << (f1 * f2).print_full()<<std::endl;
    std::cout<<"operator/ " << (f1 / f2).print_full()<<std::endl;
    std::cout<<"DIF ++A"<<std::endl;
    std::cout<<((++f1) * (++f2)).print_full()<<std::endl;
    std::cout<<"DIF A++"<<std::endl;  // не совсем выкупаю как показать разницу без цикла
    std::cout<<((f1++) * (f2++)).print_full()<<std::endl;

}
