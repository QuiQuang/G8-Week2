#include "PhanSo.h"

void PhanSo::Input() {
	this->AssignNum();
	this->AssignDeno();
}

ostream& operator<<(ostream& os, PhanSo& PS) {
	os << PS.Tu << "/" << PS.Mau;
	return os;
}

int PhanSo::GetNumerator() {
	return Tu;
}

int PhanSo::GetDenominator() {
	return Mau;
}

void PhanSo::AssignNum() {
	cout << "Nhap tu so : ";
	cin >> Tu;
}

void PhanSo::AssignDeno() {
	do {
		cout << "Nhap mau so : ";
		cin >> Mau;
		if (Mau == 0) cout << "Loi\n";
	} while (Mau == 0);
}

PhanSo* PhanSo::Inversion() {
	if (Tu == 0) {
		cout << "Loi";
		return NULL;
	}
	PhanSo* temp = new PhanSo;
	temp->Tu = Mau;
	temp->Mau = Tu;
	return temp;
}

int PhanSo::GCD(int a, int b) {
	if (b == 0) return a;
	return(b, a % b);
}

void PhanSo::Reduce() {
	int temp = GCD(Tu, Mau);
	Tu /= temp;
	Mau /= temp;
}

PhanSo PhanSo::Add(PhanSo A) {
	PhanSo Ans;
	Ans.Tu = Tu * A.Mau + Mau * A.Tu;
	Ans.Mau = Mau * A.Mau;
	Ans.Reduce();
	return Ans;
}

PhanSo PhanSo::Sub(PhanSo A) {
	PhanSo Ans;
	Ans.Tu = Tu * A.Mau - Mau * A.Tu;
	Ans.Mau = Mau * A.Mau;
	Ans.Reduce();
	return Ans;
}

PhanSo PhanSo::Mul(PhanSo A) {
	PhanSo Ans;
	Ans.Tu = Tu * A.Tu;
	Ans.Mau = Mau * A.Mau;
	Ans.Reduce();
	return Ans;
}

PhanSo* PhanSo::Div(PhanSo A) {
	
	if (A.Tu == 0) {
		cout << "Loi";
		return NULL;
	}
	PhanSo Ans = this->Mul(*A.Inversion());
	return &Ans;
}