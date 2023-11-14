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
		cout << "��� ������� ��������: " << *obj.name;
	}
	~Fio()
	{
		delete name;
		name = nullptr;
	}
};


class DomTel//�������� ������� //6
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
			cout << "�������� �������: " << *obj.telefon;
		}
		else
		{
			cout << "�������� �������: ���������� (������ ��� ������)";
		}
		
	}
};

class RabTel//������� ������� //6
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
			cout << "������� �������: " << *obj.telefon;
		}
		else
		{
			cout << "������� �������: ���������� (������ ��� ������)";
		}

	}


};

class MobTel//��������� ������� //10
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
			cout << "��������� �������: " <<  *obj.telefon;
		}
		else
		{
			cout << "��������� �������: ���������� (������ ��� ������)";
		}

	}


};

class DopInfo//�������������� ����������
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
		cout << "�������������� ����������: " << *obj.informat;
	}

};