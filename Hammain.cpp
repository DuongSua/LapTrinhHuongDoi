#include"PhanSo.h"

int main()
{
	PHANSO A;
	PHANSO B;
	PHANSO C;
	PHANSO KQ;
	PHANSO HIEU;
	PHANSO TICH;
	PHANSO THUONG;

	A.nhap();
	B.nhap();
	
	A.xuat();
	B.xuat();
	
    KQ=A.CONG(B);
	KQ.xuat();

	HIEU = A.TRU(B);
	HIEU.xuat();

	TICH = A.NHAN(B);
	TICH.xuat();
	THUONG = A.CHIA(B);
	THUONG.xuat();

	return 0;
}