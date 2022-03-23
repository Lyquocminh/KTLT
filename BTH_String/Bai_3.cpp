#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char s1[20], s2[20];
	printf("Nhap vao chuoi s1: ");
	gets(s1);
	printf("Nhap vao chuoi s2: ");
	gets(s2);
	printf("Chuoi s1: %s\nChuoi s2: %s", s1,s2);
	int ss= strcmp(s1,s2);
	if(ss==1)
		printf("\ns1 > s2");
	if(ss==0)
		printf("\ns1 = s2");
	if(ss==-1)
		printf("\ns1 < s2");
	strcat(s1,s2);
	printf("\nNoi chuoi s2 vao chuoi s1: %s", s1);
	char *kt= (char*)malloc(20);
	kt=strstr(s1,s2);
	if(kt=='\0')
		printf("\nChuoi s1 khong chua chuoi s2");
	else 
		printf("\nChuoi s1 chua chuoi s2");
	return 0;
}
