#include <stdio.h>

int Fibo(int n){
	if(n==1 || n==2)
		return 1;
	return Fibo(n-1)+Fibo(n-2);
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("So hang thu %d trong day Fibonaci la: %d", n, Fibo(n));
	return 0;
}
