#include <stdio.h>

void Thap(int n, char a, char b, char c){
	if(n==1){
		printf("%c --> %c\n", a, c);
		return;
	}
	Thap(n-1,a,c,b);
	Thap(1,a,b,c);
	Thap(n-1,b,a,c);
}
int main(){
	char a='A', b='B', c='C';
	int n;
	printf("Nhap vao so dia: ");
	scanf("%d", &n);
	Thap(n,a,b,c);
	return 0;
}
