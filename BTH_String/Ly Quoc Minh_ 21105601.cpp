#include <stdio.h>
#include <string.h>
void Left(char a[], int n){
	for(int i=0;i<n;i++)
		printf("%c", a[i]);
}
void Right(char a[], int n){
	for(int i=strlen(a)-n; i<strlen(a);i++)
		printf("%c", a[i]);
}
int main(){
	char a[20];
	int l,r;
	printf("Nhap vao chuoi: ");
	gets(a);
	printf("Nhap so luong ky tu lay tu ben trai: ");
	scanf("%d", &l);
	Left(a,l);
	printf("\nNhap so luong ky tu lay tu ben phai: ");
	scanf("%d", &r);
	Right(a,r);
	return 0;
}
