#include <stdio.h>

int TongCacChuSo(int n){
	if(n<10)
		return n;
	int i = n%10;
	return i+TongCacChuSo(n/10);
}
int main(){
	int n;
	printf("Nhap vao n= ");
	scanf("%d", &n);
	printf("Tong cac chu so cua %d = %d", n, TongCacChuSo(n));
	return 0;
}
