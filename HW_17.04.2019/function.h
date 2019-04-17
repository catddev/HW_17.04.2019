#pragma once
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<string>//for string
#include<fstream>
using namespace std;

//В классе автомобиль  реализуйте потоковый ввод / вывод(>> , << ) в виде дружественных операторов.
//У класса есть такие свойства  как : Фирма, Салон, Автостоянка.

//В классе Картина  реализуйте потоковый ввод / вывод(>> , << ) в виде дружественных операторов.
//У класса есть такие свойства  как : Коллекционер, выставка.

//Для всех задании считайте данные из файла и выведите на консоль

class Auto {
private:
	string company;
	string salon;
	string station;
public:
	friend istream& operator>>(istream& is, Auto & obj);
	friend ostream& operator<<(ostream& os, Auto obj);
};
istream& operator>>(istream& is, Auto & obj);
ostream& operator<<(ostream& os, Auto obj);

class Picture {
private:
	string collector;
	string exhibition;
public:
	friend istream& operator>>(istream& is, Picture & obj);
	friend ostream& operator<<(ostream& os, Picture obj);
};
istream& operator>>(istream& is, Picture & obj);
ostream& operator<<(ostream& os, Picture obj);