#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
	int Tu, Mau;
public:
	void Input();
	friend ostream& operator<<(ostream&, PhanSo& PS);
	int GetNumerator();
	int GetDenominator();
	void AssignNum();
	void AssignDeno();
	PhanSo* Inversion();
	int GCD(int, int);
	void Reduce();
	PhanSo Add(PhanSo);
	PhanSo Sub(PhanSo);
	PhanSo Mul(PhanSo);
	PhanSo* Div(PhanSo);
};

