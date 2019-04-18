#include"function.h"

Auto::Auto()
{
	company = "";
	salon = "";
	station = "";
}

Auto::Auto(string co, string s, string st)
{
	company = co;
	salon = s;
	station = st;
}

void Auto::setCompany(string company)
{
	this->company = company;
}

void Auto::setSalon(string salon)
{
	this->salon = salon;
}

void Auto::setStation(string station)
{
	this->station = station;
}

string Auto::getCompany()
{
	return company;
}

string Auto::getSalon()
{
	return salon;
}

string Auto::getStation()
{
	return station;
}

istream & operator>>(istream & is, Auto & obj)
{
	is >> obj.company >> obj.salon >> obj.station;
	return is;
}

ostream & operator<<(ostream & os, Auto obj)
{
	os << "Company: " << obj.company << " Salon: " << obj.salon << " Station: " << obj.station << endl;
	return os;
}

istream & operator>>(istream & is, Picture & obj)
{
	getline(is, obj.collector, '\n');// считывание string с пробелами
	getline(is, obj.exhibition, '\n');
	
	return is;
}

ostream & operator<<(ostream & os, Picture obj)
{
	os << "Collector: "<<obj.collector <<" Exhibiton: "<< obj.exhibition << endl;
	return os;
}

Picture::Picture()
{
	collector = "";
	exhibition = "";
}
