#include"PhanSo.h"
#include<iostream>
using namespace std;

void PHANSO::nhap()
{
	cout << "Nhap tu so: " ;
	cin >> tu;
	cout << "Nhap mau so: ";
	cin >> mau;
}

void PHANSO::xuat()
{
	cout << tu << "/" << mau << endl;
	cout << tu * 1.0 / mau << endl;
}

PHANSO PHANSO::CONG(PHANSO PS)
{
	PHANSO KQ;
	KQ.tu = tu * PS.mau + PS.tu * mau;
	KQ.mau = mau * PS.mau;
	return KQ;
}

PHANSO PHANSO::TRU(PHANSO PS)
{
	PHANSO HIEU;
	HIEU.tu = tu * PS.mau - PS.tu * mau;
	HIEU.mau = mau * PS.mau;
	return HIEU;
}

PHANSO PHANSO::NHAN(PHANSO PS)
{
	PHANSO TICH;
	TICH.tu = tu * PS.tu;
	TICH.mau = mau * PS.mau;
	return TICH;
}

PHANSO PHANSO::CHIA(PHANSO PS)
{
	PHANSO THUONG;
	THUONG.tu = tu * PS.mau;
	THUONG.mau = mau * PS.tu;
	return THUONG;
}