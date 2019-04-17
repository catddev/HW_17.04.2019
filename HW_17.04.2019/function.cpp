#include"function.h"


istream & operator>>(istream & is, Auto & obj)
{
	is >> obj.company >> obj.salon >> obj.station;
	return is;
}

ostream & operator<<(ostream & os, Auto obj)
{
	os << obj.company << endl << obj.salon << obj.station << endl;
	return os;
}

istream & operator>>(istream & is, Picture & obj)
{
	// TODO: вставьте здесь оператор return
}

ostream & operator<<(ostream & os, Picture obj)
{
	// TODO: вставьте здесь оператор return
}




