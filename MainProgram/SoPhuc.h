#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class SoPhuc
{
	float PhanThuc, PhanAo;
public:
	friend ostream& operator<<(ostream&, SoPhuc& PS);
	void Input();
	int GetReal();
	int GetImag();
	void AssignReal();
	void AssignImag();
	float Module();
	SoPhuc Add(SoPhuc A);
	SoPhuc Sub(SoPhuc A);
	SoPhuc Mul(SoPhuc A);
	SoPhuc Div(SoPhuc A);
};

