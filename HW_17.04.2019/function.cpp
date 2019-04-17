#include"function.h"


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




