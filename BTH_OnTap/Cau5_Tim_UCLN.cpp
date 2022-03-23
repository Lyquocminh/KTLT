#include <stdio.h>

int UCLN(int a, int b){
	if(a == b)
		return a;
	int kq, soNho;
	(a<b) ? soNho=a : soNho=b;
	for(int i = soNho; i > 0; i--)
		if(a%i == 0 && b%i == 0)
			return i;
}
int main(){
	int a,b;
	printf("Nhap vao a,b: ");
	scanf("%d%d",&a, &b);
	printf("Uoc chung lon nhat cua %d va %d la: %d", a, b, UCLN(a,b));
	return 0;
}
