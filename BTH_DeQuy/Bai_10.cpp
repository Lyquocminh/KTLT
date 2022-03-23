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
int MaxArr(int a[], int n){
	if(n==1)
		return a[0];
	return MaxArr(a,n-1)>a[n-1]?MaxArr(a,n-1):a[n-1];
}
int main(){
	int n;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	int a[n];
	NhapMang(a,n);
	XuatMang(a,n);
	printf("Gia tri lon nhat cua mang la: %d", MaxArr(a,n));
	return 0;
}
