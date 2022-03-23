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
int isSym(int a[], int n, int i){
	if(i>=n-1-i) 
		return 1;
	if(a[i]!=a[n-1-i])
		return 0;
	return isSym(a,n,i+1);
}
int main(){
	int n;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	int a[n];
	NhapMang(a,n);
	XuatMang(a,n);
	int dem=0;
	if(isSym(a,n,dem))
		printf("\nMang doi xung");
	else 
		printf(
		"\nMang khong doi xung");
	return 0;
}
