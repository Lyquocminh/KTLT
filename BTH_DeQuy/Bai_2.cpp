#include <stdio.h>
#include <math.h>
long long DanSo(int nam){
	if(nam == 2018)
		return 8000000000;
	return 1.025*DanSo(nam-1);
}
int main(){
	int nam = 2028;
	printf("Dan so vao nam 2028 la %lld", DanSo(2028));
	return 0;
}
