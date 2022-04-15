#include <stdio.h>
#include <string.h>
struct DATE{
	int ngay;
	int thang;
	int nam;
};
struct SACH{
	char TenSach[20];
	char ISBN[14];
	char TacGia[30];
	char NhaXB[30];
	DATE NgayNhap;
};
void Nhap1Sach(SACH &a){
	fflush(stdin);
	printf("Nhap ten sach: "); gets(a.TenSach);
	fflush(stdin);
	printf("ISBN: "); gets(a.ISBN);
	fflush(stdin);
	printf("Tac gia: "); gets(a.TacGia);
	fflush(stdin);
	printf("Nha xuat ban: "); gets(a.NhaXB);
	printf("Ngay nhap sach (d/m/y): "); 
	scanf("%d/%d/%d", &a.NgayNhap.ngay, &a.NgayNhap.thang, &a.NgayNhap.nam);
}
void NhapDSSach(SACH a[], int n){
	for(int i=0;i<n;i++){
		printf("Nhap thong tin quyen sach thu %d\n", i+1);
		Nhap1Sach(a[i]);
	}
}
int TimSach(SACH a[], int n, char tim[]){
	for(int i=0;i<n;i++)
		if(strcmp(a[i].ISBN, tim)==0)
			return i;
	return -1;
}
void Xuat1Sach(SACH a){
	printf("Ten sach: %s", a.TenSach);
	printf("\nTac gia: %s", a.TacGia);
	printf("\nNha xuat ban: %s", a.NhaXB);
	printf("\nNgay nhap: %d/%d/%d", a.NgayNhap.ngay, a.NgayNhap.thang, a.NgayNhap.nam);
}
void XuatKetQua(SACH a[], int n, char tim[]){
	if(TimSach(a,n,tim)==-1)
		printf("\n\tKhong tim thay");
	else 
		Xuat1Sach(a[TimSach(a,n,tim)]);
}
int main(){
	int n;
	printf("Nhap vao so luong sach: "); scanf("%d", &n);
	SACH a[n];
	NhapDSSach(a,n);
	char timISBN[14];
	fflush(stdin);
	printf("Nhap ISBN can tim: "); gets(timISBN);
	XuatKetQua(a,n,timISBN);
	return 0;
}
