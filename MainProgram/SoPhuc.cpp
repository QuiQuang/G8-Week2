#include "SoPhuc.h"

void SoPhuc::Input() {
	this->AssignReal();
	this->AssignImag();
}

ostream& operator<<(ostream& os, SoPhuc& SP) {
	if (SP.PhanAo < 0) {
		os << SP.PhanThuc << " + (" << SP.PhanAo << ")i";
		return os;
	}
	os << SP.PhanThuc << " + " << SP.PhanAo << "i";
	return os;
}

int SoPhuc::GetReal() {
	return PhanThuc;
}

int SoPhuc::GetImag() {
	return PhanAo;
}

void SoPhuc::AssignReal() {
	cout << "Nhap phan thuc : ";
	cin >> PhanThuc;
}

void SoPhuc::AssignImag() {
	cout << "Nhap phan ao : ";
	cin >> PhanAo;
}

float SoPhuc::Module() {
	return sqrt(pow(PhanThuc, 2) + pow(PhanAo, 2));
}

SoPhuc SoPhuc::Add(SoPhuc A) {
	SoPhuc Ans;
	Ans.PhanThuc = PhanThuc + A.PhanThuc;
	Ans.PhanAo = PhanAo + A.PhanAo;
	return Ans;
}

SoPhuc SoPhuc::Sub(SoPhuc A) {
	SoPhuc Ans;
	Ans.PhanThuc = PhanThuc - A.PhanThuc;
	Ans.PhanAo = PhanAo + A.PhanAo;
	return Ans;
}

SoPhuc SoPhuc::Mul(SoPhuc A) {
	SoPhuc Ans;
	Ans.PhanThuc = PhanThuc * A.PhanThuc - PhanAo * A.PhanAo;
	Ans.PhanAo = PhanThuc * A.PhanAo + PhanAo * A.PhanThuc;
	return Ans;
}

SoPhuc SoPhuc::Div(SoPhuc A) {
	SoPhuc Ans;
	Ans.PhanThuc = (PhanThuc * A.PhanThuc + PhanAo * A.PhanAo) / pow(A.Module(), 2);
	Ans.PhanAo = (PhanThuc * A.PhanAo - PhanAo * A.PhanThuc) / pow(A.Module(), 2);
	return Ans;
}