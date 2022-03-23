#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* Left(char a[], int n){
	if(n>strlen(a))
		n=strlen(a);
	char *s;
	int i;
	s=(char*)malloc(n*sizeof(char));
	for(i=0;i<n;i++)
		s[i]=a[i];
	s[i]='\0';
	return s;
}
char* Right(char a[], int n){
	if(n>strlen(a))
		n=strlen(a);
	char *s;
	int i;
	s=(char*)malloc(n*sizeof(char));
	for(i=strlen(a)-n;i<strlen(a);i++)
		s[i]=a[i];
	s[i]='\0';
	return s;
}
int main(){
	char a[20];
	int l,r;
	printf("Nhap vao chuoi: ");
	gets(a);
	printf("Nhap so luong ky tu lay tu ben trai: ");
	scanf("%d", &l);
	char *sL= Left(a,l);
	printf("%s", *sL);
	printf("\nNhap so luong ky tu lay tu ben phai: ");
	scanf("%d", &r);
	Right(a,r);
	return 0;
}
