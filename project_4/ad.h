#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

class Information{
	std::string city;
	std::string street;
	int number_of_home;
	int number_of_flat;
	std::string full_adres;
public:
	Information();
	void all_to_str();
	std::string get_full_adres(){
		return full_adres;
	}
	void set_adres(std::string city,std::string street,int number_of_home,int number_of_flat);
};

Information::Information()
{
	this->city = "";
	this->street = "";
	this->number_of_home = 0;
	this->number_of_flat = 0;
}

void Information::all_to_str()
{
	full_adres += city;
	full_adres += ' ';
	full_adres += street;
	full_adres += ' ';
	full_adres += std::to_string(number_of_home);
	full_adres += ' ';
	full_adres += std::to_string(number_of_flat);
}

void Information::set_adres(std::string city,std::string street,int number_of_home,int number_of_flat)
{
	this->city = city;
	this->street = street;
	this->number_of_home = number_of_home;
	this->number_of_flat = number_of_flat;
}


