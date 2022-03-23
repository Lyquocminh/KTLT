#include <stdio.h>

int fibo_1 (int x){
	if (x==0) 
		return 0;
	else if 
		(x==1) return 1;
	else 
		return fibo_1(x-1)+fibo_1(x-2);
}
int fibo_2 (int x){
	int t1 = 1, t2 = 1, f = 1;
	for (int i = 3; i <= x; i++){
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return f;
}
int main() {
	int n;
	do {
		printf("Nhap vao so nguyen n = ");
		scanf("%d", &n);
	}while (n<0);
	printf("Dung de quy: %d", fibo_1(n));
	printf("\nDung vong lap: %d", fibo_2(n));
	return 0;
}
