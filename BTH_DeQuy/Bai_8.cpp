#include <stdio.h>

void NhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
}
void XuatMang(int a[], int n){
	printf("Gia tri cua mang:\n");
	for(int i=0; i<n; i++)
		printf("   %d", i);
}
int Sum(int a[], int n){
	if(n==0)
		return 0;
	return a[n-1]+Sum(a,n-1);
}
int main(){
	int n;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	int a[n];
	NhapMang(a,n);
	XuatMang(a,n);
	printf("Tong cac phan tu la: %d", Sum(a,n));
	return 0;
}
