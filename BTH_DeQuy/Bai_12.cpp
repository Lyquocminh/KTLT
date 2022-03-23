#include <stdio.h>
float NegAverage(int a[],int n,int &sl){
	if(n==0)
		return 0;
	if(a[n-1]<0){
		sl++;
		return a[n-1]+NegAverage(a,n-1,sl);
	}
	if(a[n-1]>0)
		return NegAverage(a,n-1,sl);
}
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	int sl=0;
	printf("NegAverage = %.2f", NegAverage(a,n,sl)*1.0/sl);
	return 0;
}
