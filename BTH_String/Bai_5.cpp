#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* lTrim(char s[]){
	int i=0;
	while(s[i]==' ') i++;
	if(i>0) strcpy(&s[0], &s[i]);
	return s;
}
char* rTrim(char s[]){
	int i= strlen(s)-1;
	while(s[i]==' ') i--;
	s[i+1]='\0';
	return s;
}
char* Trim(char s[]){
	lTrim(rTrim(s));
	char *ptr= strstr(s,"  ");
	while(ptr!='\0'){
		strcpy(ptr, ptr+1);
		ptr= strstr(s,"  ");
	}
	return s;
}
char* XoaKtuDacBiet(char s[]){
	int l= strlen(s);
	char *ptr=s;
	for(int i=0;i<l;i++)
		if(s[i]!=' ' && (s[i]<'A' || (s[i]>'Z' && s[i]<'a') || s[i]>'z')){
			strcpy(ptr+i, ptr+1+i);
//			for(int j=i;j<l-1;j++)
//				s[j]=s[j+1];
//			l--;
//			s[l]='\0';
//			i--;
		}
	return s;
}
char* NameStr(char s[]){
	strlwr(s);
	int l= strlen(s);
	int i=0;
	for(;i<l;i++)
		if(i==0 || s[i-1]==' ') s[i]= toupper(s[i]);
	return s;
}
int main(){
	char s[30];
	printf("Nhap vao chuoi: ");
	gets(s);
	printf("Chuoi goc: %s", s);
	Trim(s);
	printf("\nLoai space du: %s", s);
	XoaKtuDacBiet(s);
	Trim(s);
	NameStr(s);
	printf("\nCac tu da chuan hoa: %s", s);
	return 0;
}


