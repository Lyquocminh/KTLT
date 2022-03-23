#include <stdio.h>
#include <string.h>
struct NhanVien{
	char code[8];
	char name[20];
	double salary;
	double allowance;
};
void NhapNhanVien(NhanVien &nv){
	printf("code: "); gets(nv.code);
	printf("name: "); gets(nv.name);
	printf("salary: "); scanf("%lf",&nv.salary);
	printf("allowance: "); scanf("%lf",&nv.allowance);
}
void NhapDSNhanVien(NhanVien nv[], int n){
	for(int i=0;i<n;i++){
		printf("\nNhap thong tin nhan vien thu %d\n", i+1);
		fflush(stdin);
		NhapNhanVien(nv[i]);
	}
}
void InNhanVien(NhanVien nv){
	printf("%s\t|%20s\t|%4.2f\t|%2.2f\n", nv.code, nv.name, nv.salary, nv.allowance);
}
void InDSNhanVien(NhanVien nv[], int n){
	printf("code\t|\t\tname\t|salary\t|allowance\n");
	for(int i=0;i<n;i++)
		InNhanVien(nv[i]);
}
void TimNhanVien(NhanVien nv[], int n){
	char ten[20];
	fflush(stdin);
	printf("\nNhap ten nhan vien can tim: ");
	gets(ten);
	printf("\ncode\t|\tname\t\t|salary\t|allowance\n");
	int kt=0;
	for(int i=0;i<n;i++)
		if(strcmp(ten,nv[i].name)==0){
			InNhanVien(nv[i]);
			kt++;
		}
	if(kt==0)
		printf("\tKHONG TIM THAY TEN\n");		
}
double TongLuong(NhanVien nv[], int n){
	if(n==1)
		return nv[0].salary;
	return nv[n-1].salary+TongLuong(nv,n-1);
}
void XoaNhanVien(NhanVien nv[], int &n){
	char ma[8];
	printf("\nNhap ma cua nhan vien can xoa: ");
	gets(ma);
	for(int i=0;i<n;i++)
		if(strcmp(ma,nv[i].code)==0){
			int x;
			printf("\ncode\t|\tname\t\t|salary\t|allowance\n");
			InNhanVien(nv[i]);
			printf("Nhap so 1 de xoa, Nhap so bat ki de bo qua: ");
			scanf("%d", &x);
			if(x==1){
			for(int j=i;j<n-1;j++)
				nv[j]=nv[j+1];
			n--;
			}
			break;
		}
}
void swap(NhanVien &a,NhanVien &b){
	NhanVien tam = a;
	a= b;
	b= tam;
}
void SapXepTheoLuong(NhanVien nv[], int n){
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(nv[i].salary+nv[i].allowance>nv[j].salary+nv[j].allowance)
				swap(nv[i],nv[j]);
}
int main(){
	int n;
	printf("Nhap so luong nhan vien: ");
	scanf("%d",&n);
	NhanVien nv[n];
	NhapDSNhanVien(nv,n);
	printf("\nDanh sach nhan vien\n");
	InDSNhanVien(nv,n);
	TimNhanVien(nv,n);
	printf("\nTong luong cua cac nhan vien: %.2f", TongLuong(nv,n));
	XoaNhanVien(nv,n);
	printf("\nDanh sach nhan vien sau khi sap xep\n");
	SapXepTheoLuong(nv,n);
	InDSNhanVien(nv,n);
	return 0;
}
