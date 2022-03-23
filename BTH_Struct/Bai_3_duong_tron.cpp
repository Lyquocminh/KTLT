#include <stdio.h>
#include <math.h>
struct DuongTron{
	float xc;
	float yc;
	float r;
 };
int main(){
	DuongTron c1, c2;
	printf("Nhap vao xc, yc va R cua C1: ");
	scanf("%f%f%f", &c1.xc, &c1.yc, &c1.r);
	printf("Nhap vao xc, yc va R cua C2: ");
	scanf("%f%f%f", &c2.xc, &c2.yc, &c2.r);
	float Hieu2BK= abs(c1.r-c2.r);
	float KhoangCach2Tam= sqrt(pow(c2.xc-c1.xc,2)+pow(c2.yc-c1.yc,2));
	float Tong2BK= c1.r + c2.r;
	if(KhoangCach2Tam>Hieu2BK && KhoangCach2Tam<Tong2BK)
		printf("Cat nhau");
	if(KhoangCach2Tam==Hieu2BK)
		printf("\nTiep xuc trong");
	if(KhoangCach2Tam==Tong2BK)
		printf("\nTiep xuc ngoai");
	if(KhoangCach2Tam>Tong2BK)
		printf("\nNam ngoai nhau");
	if(KhoangCach2Tam<Hieu2BK)
		printf("\nNam trong nhau");
	if(KhoangCach2Tam==0)
		printf("\nDong tam");
	return 0;
	
}
