#include "DonThuc.h"

void DonThuc::Input() {
	AssignCoe();
	AssignPow();
}

ostream& operator<<(ostream& os, DonThuc& PS) {
	if (PS.HeSo == 0) {
		os << 0;
		return os;
	}
	else if (PS.Bac == 0) {
		os << PS.HeSo;
		return os;
	}
	else if (PS.HeSo == 1)
		os << "x^";
	else os << PS.HeSo << "x^";

	if (PS.Bac > 0) os << PS.Bac;
	else os << "(" << PS.Bac << ")";
	return os;
}

void DonThuc::AssignCoe() {
	cout << "Nhap he so : ";
	cin >> HeSo;
}

void DonThuc::AssignPow() {
	cout << "Nhap bac : ";
	cin >> Bac;
}

float DonThuc::GetPow() {
	return Bac;
}

float DonThuc::GetCoe() {
	return HeSo;
}

float DonThuc::Compute(int x) {
	return HeSo * pow(x, Bac);
}

DonThuc DonThuc::Derivative() {
	DonThuc Ans;
	Ans.HeSo = HeSo * Bac;
	Ans.Bac = Bac - 1;
	return Ans;
}

DonThuc DonThuc::AntiDerivative() {
	DonThuc Ans;
	Ans.HeSo = HeSo * 1 / (Bac + 1);
	Ans.Bac = Bac + 1;
	return Ans;
}

void DonThuc::Add(DonThuc A) {
	DonThuc Ans;
	if (Bac == A.Bac) {
		Ans.HeSo = HeSo + A.HeSo;
		cout << Ans;
	}
	else cout << A << " + " << *this;
}

void DonThuc::Sub(DonThuc A) {
	DonThuc Ans;
	if (Bac == A.Bac) {
		Ans.HeSo = HeSo - A.HeSo;
		cout << Ans;
	}
	else cout << A << " - " << *this;
}

void DonThuc::Mul(DonThuc A) {
	DonThuc Ans;
	Ans.HeSo = HeSo * A.HeSo;
	Ans.Bac = Bac + A.Bac;
	cout << Ans;
}

void DonThuc::Div(DonThuc A) {
	DonThuc Ans;
	Ans.HeSo = HeSo / A.HeSo;
	Ans.Bac = Bac - A.Bac;
	cout << Ans;
}