#include <stdio.h>

struct PhanSo{
	int tu;
	int mau;
};
int UCLN(int a, int b){
	if(b==0) return a;
	return UCLN(b, a%b);
}
void ToiGian(int &a, int &b){
	int uc= UCLN(a,b);
	a= a/uc;
	b= b/uc;
	if(b<0){
		a= (-1)*a;
		b= (-1)*b;
	}
}
PhanSo Tong(PhanSo ps1, PhanSo ps2){
	PhanSo tong;
	tong.tu = ps1.tu*ps2.mau+ps1.mau*ps2.tu;
	tong.mau = ps1.mau*ps2.mau;
	ToiGian(tong.tu,tong.mau);
	return tong;
}
PhanSo Hieu(PhanSo ps1, PhanSo ps2){
	PhanSo hieu;
	hieu.tu = ps1.tu*ps2.mau-ps1.mau*ps2.tu;
	hieu.mau= ps1.mau*ps2.mau;
	ToiGian(hieu.tu, hieu.mau);
	return hieu;
}
PhanSo Tich(PhanSo ps1, PhanSo ps2){
	PhanSo tich;
	tich.tu = ps1.tu*ps2.tu;
	tich.mau = ps1.mau*ps2.mau;
	ToiGian(tich.tu, tich.mau);
	return tich;
}
PhanSo Thuong(PhanSo ps1, PhanSo ps2){
	PhanSo thuong;
	thuong.tu = ps1.tu*ps2.mau;
	thuong.mau = ps1.mau*ps2.tu;
	ToiGian(thuong.tu, thuong.mau);
	return thuong;
}
int main(){
	PhanSo ps1, ps2, tong, hieu, tich, thuong;
	printf("Nhap vao tu va mau phan so 1: ");
	scanf("%d%d", &ps1.tu, &ps1.mau);
	printf("%d/%d\n", ps1.tu, ps1.mau);
	printf("Nhap vao tu va mau phan so 2: ");
	scanf("%d%d", &ps2.tu, &ps2.mau);
	printf("%d/%d\n", ps2.tu, ps2.mau);
	tong = Tong(ps1, ps2);
	hieu = Hieu(ps1, ps2);
	tich = Tich(ps1, ps2);
	thuong = Thuong(ps1, ps2);
	printf("\n%d/%d + %d/%d = %d/%d", ps1.tu, ps1.mau, ps2.tu, ps2.mau, tong.tu, tong.mau);
	printf("\n%d/%d - %d/%d = %d/%d", ps1.tu, ps1.mau, ps2.tu, ps2.mau, hieu.tu, hieu.mau);
	printf("\n%d/%d * %d/%d = %d/%d", ps1.tu, ps1.mau, ps2.tu, ps2.mau, tich.tu, tich.mau);
	printf("\n%d/%d / %d/%d = %d/%d", ps1.tu, ps1.mau, ps2.tu, ps2.mau, thuong.tu, thuong.mau);

	return 0;
}

