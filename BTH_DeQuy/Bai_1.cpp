#include <stdio.h>

int GiaiThua(int n){
	if(n==1)
		return 1;
	return n*GiaiThua(n-1);
}
int main(){
	int n;
	printf("Nhap vao n = ");
	scanf("%d", &n);
	printf("Giai thua cua %d = %d", n, GiaiThua(n));
	return 0;
}
