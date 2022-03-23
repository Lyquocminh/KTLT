#include <stdio.h>

int GiaiThua_1(int n){
	if (n == 1)
		return 1;
	return n* GiaiThua_1(n-1);
}
int GiaiThua_2(int n){
	int kq = 1;
	for(int i = 1; i <= n; i++)
		kq*= i;
	return kq;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Su dung de quy: %d", GiaiThua_1(n));
	printf("\nSu dung vong lap: %d", GiaiThua_2(n));
	return 0;
}
