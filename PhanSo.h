#pragma once

class PHANSO
{
private:
	int tu;
	int mau;
public:
	void nhap();
	void xuat();
	PHANSO CONG(PHANSO PS);
	PHANSO TRU(PHANSO PS);
	PHANSO NHAN(PHANSO PS);
	PHANSO CHIA(PHANSO PS);
};
