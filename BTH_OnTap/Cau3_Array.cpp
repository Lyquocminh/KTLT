#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void TaoGiaTriMang(int x[], int n){
	srand(time(NULL));
	for(int i = 0; i < n; i++)
		x[i]=rand()%101;
}
void XuatMang(int x[], int n){
	printf("\nGia tri mang: ");
	for(int i = 0; i < n; i++)
		printf("\t%d", x[i]);
}
int TongCacSoLe(int x[], int n){
	int kq = 0;
	for(int i = 0; i < n; i++)
		if(x[i]%2 == 0)
			kq+=x[i];
	return kq;
}
int TimMax(int x[], int n){
	int max = x[0];
	for(int i = 1; i < n; i++)
		if(x[i] > max)
			max = x[i];
	return max;
}
int KT_SNT(int x){
	for(int i = 2; i < x; i++)
		if(x%i == 0)
			return 0;
	return 1;
}
void TimCacSNT(int x[], int n){
	printf("\nCac so nguyen to co trong mang: ");
	for(int i = 0; i < n; i++){
		if(KT_SNT(x[i]))
			printf("%d\t", x[i]);
	}
}
int KT_DoiXung(int x[], int n){
	for(int i = 0; i < n/2; i++)
		if(x[i] != x[n-i-1])
			return 0;
	return 1;
}
int main(){
	int n;
	printf("Nhap vao so luong ptu: ");
	scanf("%d", &n);
	int x[n];
	TaoGiaTriMang(x,n);
	XuatMang(x,n);
	printf("\nTong cac phan tu le cua mang: %d", TongCacSoLe(x,n));
	printf("\nGia tri lon nhat trong mang: %d", TimMax(x,n));
	TimCacSNT(x,n);
	if(KT_DoiXung(x,n))
		printf("\nMang doi xung");
	else 
		printf("\nMang khong doi xung");
	return 0;
}
