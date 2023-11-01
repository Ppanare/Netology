#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>


class Information{
	std::string city;
	std::string street;
	int house;
	int flat_number;
public:
	Information();
	std::string get_full_adress();
	void set_information(std::fstream& file);
	std::string get_city_name();
};

Information::Information()
{
	city = "";
	street = "";
	house = 0;
	flat_number = 0;
}


void Information::set_information(std::fstream& file)
{
	file>>city;
	file>>street;
	file>>house;
	file>>flat_number;
}

std::string Information::get_city_name()
{
	return city;
}

std::string Information::get_full_adress()
{
	std::string full_adress;
	full_adress += city += " ";
	full_adress += street += " ";
	std::string buf = std::to_string(house);
	full_adress += buf += " ";
	buf = std::to_string(flat_number);
	full_adress += buf;
	return full_adress;
}



