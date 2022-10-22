#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class DonThuc
{
	float HeSo, Bac;
public:
	friend ostream& operator<<(ostream&, DonThuc& PS);
	void Input();
	float GetCoe();
	float GetPow();
	void AssignCoe();
	void AssignPow();
	float Compute(int x);
	DonThuc Derivative();
	DonThuc AntiDerivative();
	void Add(DonThuc A);
	void Sub(DonThuc A);
	void Mul(DonThuc A);
	void Div(DonThuc A);
};

