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
char* trim(char s[]){
	lTrim(rTrim(s));
	char *ptr= strstr(s,"  ");
	while(ptr!='\0'){
		strcpy(ptr, ptr+1);
		ptr= strstr(s,"  ");
	}
	return s;
}
char* nameStr(char s[]){
	trim(s);
	strlwr(s);
	int l= strlen(s);
	int i=0;
	for(;i<l;i++)
		if(i==0 || s[i-1]==' ') s[i]= toupper(s[i]);
	return s;
}

int main(){
	char s[30];
	printf("Enter string: ");
	gets(s);
	trim(s);
	printf("After extra blanks are remove: %s\n", s);
	nameStr(s);
	printf("After convert it to a name: %s", s);
	return 0;
}
