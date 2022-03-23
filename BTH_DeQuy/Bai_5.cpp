#include <stdio.h>

int A(int n, int m, int &sl){
	sl++;
	if(n==0)
		return m+1;
	if(m==0)
		return A(n-1,1,sl);
	if(n>0 && m>0)
		return A(n-1,A(n,m-1,sl),sl);
}
int main(){
	int sl = 0;
	int m,n;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Nhap m = ");
	scanf("%d", &m);
	printf("A(%d,%d) = %d", n,m,A(n,m,sl));
	printf("So lan goi de quy = %d", sl);
	return 0;
}
