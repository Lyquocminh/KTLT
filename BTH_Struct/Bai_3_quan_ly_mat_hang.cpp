#include <stdio.h>
#include <string.h>
struct MatHang{
	char ma[8];
	char ten[30];
	double gia;
	char xuatXu[20];
};
void NhapMatHang(MatHang &mh){
	fflush(stdin);
	printf("Ma mat hang: "); gets(mh.ma);
	printf("Ten mat hang: "); gets(mh.ten);
	printf("Don gia: "); scanf("%lf", &mh.gia);
	fflush(stdin);
	printf("Xuat xu: "); gets(mh.xuatXu); 
}
void NhapDSMatHang(MatHang mh[], int n){
	for(int i=0;i<n;i++){
		printf("\nNhap thong tin mat hang thu %d\n", i+1);
		NhapMatHang(mh[i]);
	}
}
void InMatHang(MatHang mh){
	printf("%8s\t|%20s\t|%4.2f\t\t|%s\n", mh.ma, mh.ten, mh.gia, mh.xuatXu);
}
void InMHtheoXX(MatHang mh[], int n){
	char xx[20];
	printf("\nIn ra cac mat hang theo noi xuat xu");
	printf("\nNhap vao noi xuat xu: "); gets(xx);
	printf("ma mat hang\t|\tten mat hang\t|don gia\t|xuat xu\n");
	for(int i=0;i<n;i++)
		if(strcmp(xx,mh[i].xuatXu)==0)
			InMatHang(mh[i]);
}
void TimHangTheoMa(MatHang mh[], int n){
	char ma[8];
	printf("\nTim thong tin mat hang theo ma");
	printf("\nNhap vao ma mat hang: "); gets(ma);
	printf("ma mat hang\t|\tten mat hang\t|don gia\t|xuat xu\n");
	for(int i=0;i<n;i++)
		if(strcmp(ma,mh[i].ma)==0)
			InMatHang(mh[i]);
}
void XoaMatHang(MatHang mh[], int &n){
	char ma[8];
	printf("\nNhap ma cua mat hang can xoa: ");
	gets(ma);
	for(int i=0;i<n;i++)
		if(strcmp(ma,mh[i].ma)==0){
			int x;
			printf("ma mat hang\t|\tten mat hang\t|don gia\t|xuat xu\n");
			InMatHang(mh[i]);
			printf("Nhap so 1 de xoa, Nhap so bat ki de bo qua: ");
			scanf("%d", &x);
			if(x==1){
			for(int j=i;j<n-1;j++)
				mh[j]=mh[j+1];
			n--;
			}
			break;
		}
}
int DemSoMatHangXXVN(MatHang mh[], int n, int &dem){
	if(n==0)
		return 0;
	if(strcmp(mh[n-1].xuatXu,"Viet Nam")==0){
		dem++;
		return DemSoMatHangXXVN(mh,n-1,dem);
	}
	return DemSoMatHangXXVN(mh,n-1,dem);
}
int main(){
	int n;
	printf("Nhap vao so luong mat hang: "); scanf("%d", &n);
	MatHang mh[n];
	NhapDSMatHang(mh,n);
	InMHtheoXX(mh,n);
	TimHangTheoMa(mh,n);
	XoaMatHang(mh,n);
	int dem=0;
	DemSoMatHangXXVN(mh,n,dem);
	printf("\nSo mat hang co xuat xu tu Viet Nam: %d", dem);
	return 0;
}
