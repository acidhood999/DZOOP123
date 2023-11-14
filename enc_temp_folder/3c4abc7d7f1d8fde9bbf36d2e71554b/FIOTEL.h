#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include "Function.h"
#include <vector>
#include <fstream>


using namespace std;

class Fio {
protected:
	string* name = new string;

public:
	Fio(string& name) {
		this->name = &name;
	}

	string getName() const {
		return *name;
	}

	void Name(Fio obj) {
		cout << "Имя Фамилие Отчество: " << *obj.name;
	}
	~Fio()
	{
		delete name;
		name = nullptr;
	}
};


class DomTel//Домашний телефон //6
{
protected:
	int* telefon = new int[5];

public:
	DomTel(int& telefon)
	{
		this->telefon = &telefon;
	}
	void DomTel1(DomTel obj)
	{
		string strNumber = to_string(*telefon);
		if (strNumber.length() == 6)
		{
			cout << "Домашний телефон: " << *obj.telefon;
		}
		else
		{
			cout << "Домашний телефон: Неизвестно (Ошибка при наборе)";
		}
		
	}
};

class RabTel//Рабочий телефон //6
{
protected:
	int* telefon = new int[5];
public:
	RabTel(int& telefon)
	{
		this->telefon = &telefon;
	}
	void RabTel1(RabTel obj)
	{
		string strNumber = to_string(*telefon);
		if (strNumber.length() == 6)
		{
			cout << "Рабочий телефон: " << *obj.telefon;
		}
		else
		{
			cout << "Рабочий телефон: Неизвестно (Ошибка при наборе)";
		}

	}


};

class MobTel//Мобильный телефон //10
{
protected:
	long long* telefon = new long long[10];
public:
	MobTel(long long& telefon)
	{
		this->telefon = &telefon;
	}
	void MobTel1(MobTel obj)
	{
		string strNumber = to_string(*telefon);
		if (strNumber.length() == 10)
		{
			cout << "Мобильный телефон: " <<  *obj.telefon;
		}
		else
		{
			cout << "Мобильный телефон: Неизвестно (Ошибка при наборе)";
		}

	}


};

class DopInfo//Дополнительная информация
{
protected:
	string* informat = new string;
public:
	DopInfo(string& informat)
	{
		this->informat = &informat;
	}
	void info1(DopInfo obj)
	{
		cout << "Дополнительная информация: " << *obj.informat;
	}

};