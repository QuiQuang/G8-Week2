#include <iostream>
#include "PhanSo.h"
#include "SoPhuc.h"
#include "DonThuc.h"
using namespace std;

int main() {
	int key;
	cout << "1 - Phan so.\n";
	cout << "2 - So phuc.\n";
	cout << "3 - Don thuc.\n";
	do {
		cout << "Nhap muc ban muon thu : ";
		cin >> key;
		if (key > 3 || key < 1) cout << "Loi cu phap.\n";
	} while (key > 3 || key < 1);

	switch (key)
	{
	case 1: {
		PhanSo A;
		A.Input();
		cout << "Phan so : " << A << endl << endl;

		cout << "Numerator : " << A.GetNumerator();
		cout << "\nDenominator : " << A.GetDenominator() << endl;

		A.AssignNum();
		cout << "Gia tri phan so sau khi doi : " << A << endl;
		A.AssignDeno();
		cout << "Gia tri phan so sau khi doi : " << A << endl;

		PhanSo* B = A.Inversion();
		if (B != NULL) {
			cout << "Phan so nghich dao : " << *B << endl;
		}
		else cout << "Loi\n";

		cout << endl;
		cout << "Nhap phan so thu 1 : \n";
		A.Input();
		PhanSo C;
		cout << "Nhap phan so thu 2 : \n";
		C.Input();
		PhanSo Ans = A.Add(C);
		cout << "\nTong : " << Ans << endl;
		Ans = A.Sub(C);
		cout << "Hieu : " << Ans << endl;
		Ans = A.Mul(C);
		cout << "Tich : " << Ans << endl;
		Ans = *A.Div(C);
		if (A.Div(C) != NULL)
			cout << "Thuong : " << Ans << endl;
		else cout << "Loi";
		break;
	}
		
	case 2: {
		SoPhuc E, F, Ans;
		E.Input();
		cout << "So phuc : " << E << endl << endl;
		
		cout << "Phan thuc : " << E.GetReal() << endl;
		cout << "Phan ao : " << E.GetImag() << endl << endl;

		E.AssignReal();
		cout << "So puc sau khi doi phan thuc : " << E << endl;
		E.AssignImag();
		cout << "So puc sau khi doi phan thuc : " << E << endl << endl;

		cout << "Module cua so phuc " << E << " : " << E.Module() << endl << endl;

		cout << "Nhap so phuc thu 1 : " << endl;
		E.Input();
		cout << "Nhap so phuc thu 2 : " << endl;
		F.Input();

		Ans = E.Add(F);
		cout << "\nTong : " << Ans << endl;
		Ans = E.Sub(F);
		cout << "Hieu : " << Ans << endl;
		Ans = E.Mul(F);
		cout << "Tich : " << Ans << endl;
		Ans = E.Div(F);
		cout << "Thuong : " << Ans << endl;
		break;
	}

	case 3: {
		DonThuc G, H, KetQua;
		int x;
		G.Input();
		cout << "So phuc : " << G << endl << endl;

		cout << "He so : " << G.GetCoe() << endl;
		cout << "Bac : " << G.GetPow() << endl << endl;

		G.AssignCoe();
		cout << "So phuc sau khi doi he so : " << G << endl;
		G.AssignPow();
		cout << "So phuc sau khi doi bac : " << G << endl << endl;

		cout << "Phep tinh khi the x : ";
		cin >> x;
		cout << "Ket qua : " << G.Compute(x) << endl << endl;

		KetQua = G.Derivative();
		cout << "Dao ham : " << KetQua << endl;
		KetQua = G.AntiDerivative();
		cout << "Nguyen ham : " << KetQua << endl << endl;

		G.Input();
		cout << "So phuc : " << G << endl;
		H.Input();
		cout << "So phuc : " << H << endl << endl;

		G.Add(H); cout << endl;
		G.Sub(H); cout << endl;
		G.Mul(H); cout << endl;
		G.Div(H); cout << endl;


		break;
	}
	}
	


	
	return 0;
}