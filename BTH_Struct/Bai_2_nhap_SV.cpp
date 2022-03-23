#include <stdio.h>

struct SinhVien{
	char MSSV[10];
	char hoTen[30];
	float GK;
	float TH;
	float LT;
	float TK;
};

int main(){
	SinhVien SV;
	printf("Nhap vao MSSV: ");
	gets(SV.MSSV);
	printf("Nhap vao ho ten: ");
	gets(SV.hoTen);
	printf("Nhap vao diem giua ki: ");
	scanf("%f", &SV.GK);
	printf("Nhap vao diem thuc hanh: ");
	scanf("%f", &SV.TH);
	printf("Nhap vao diem ly thuyet: ");
	scanf("%f", &SV.LT);
	SV.TK = SV.GK*0.1 + SV.TH*0.3 + SV.LT*0.6;
	printf("Diem tong ket cua sinh vien la: %.2f", SV.TK);
	return 0;
}
