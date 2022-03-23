#include <stdio.h>

int GCD(int a,int b){
	if (a==0)
		return b;
	if (a>0)
		return GCD(b%a,a);
}

int main(){
	int a,b;
	printf("Nhap vao a,b: ");
	scanf("%d%d", &a,&b);
	printf("Uoc chung lon nhat cua %d va %d la %d", a,b, GCD(a,b));
	return 0;
}
