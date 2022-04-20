#include <stdio.h>
#include <string.h>
struct Hedgehog{
	char HegID[8];
	char HegSpe[15];
	long Price;
	int Quantity;
};
void Nhap1Nhim(Hedgehog Hed){
	fflush(stdin);
	printf("Ma nhim: "); gets(Hed.HegID);
	fflush(stdin);
	printf("Ten nhim: "); gets(Hed.HegSpe);
	printf("Gia: "); scanf("%ld", &Hed.Price);
	printf("So luong: "); scanf("%d", &Hed.Quantity);
}
void NhapDSNhim(Hedgehog HedArr[], int n){
	for(int i=0;i<n;i++){
		printf("\nNhap thong tin nhim thu %d\n", i+1);
		Nhap1Nhim(HedArr[i]);
	}
}
long TimMax(Hedgehog HedArr[], int n){
	long max = HedArr[0].Price;
	for(int i=1;i<n;i++)
		if(HedArr[i].Price > max)
			max = HedArr[i].Price;
	return max;
}
void Xuat1Nhim(Hedgehog Hed, int i){
	//printf("\n%3d %9s %16s %14d %8d", i, Hed.HegID, Hed.HegSpe, Hed.Price, Hed.Quantity);
	printf("\n%3d ", i);
	printf("%9s ", Hed.HegID);
	printf("%16s ", Hed.HegSpe);
	printf("%14d ", Hed.Price);
	printf("%8d", Hed.Quantity);
}
void XuatDSNhim(Hedgehog HedArr[], int n){
	printf("%3s %9s %16s %14s %8s", "STT", "Ma nhim", "Ten loai Nhim", "Don gia (ngan)", "So luong");
	//long MaxGia = TimMax(HedArr, n);
	for(int i=0;i<n;i++)
		//if(MaxGia == HedArr[i].Price)
		Xuat1Nhim(HedArr[i], i);
			//printf("\n%3d %9s %16s %14d %8d", i, HedArr[i].HegID, HedArr[i].HegSpe, HedArr[i].Price, HedArr[i].Quantity);
}
int TimNhimYellow(Hedgehog HedArr[], int n){
	for(int i=0;i<n;i++)
		if(strcmp(HedArr[i].HegSpe, "Hed Yellow")==0)
			return i;
	return -1;
}
void CapNhatGia(Hedgehog HedArr[], int n){
	int i= TimNhimYellow(HedArr, n);
	if(i==-1)
		printf("\n KHONG CO NHIM YELLOW");
	else 
		HedArr[i].Price*= 1.15;
}
int main(){
	int n;
	printf("Nhap vao so loai nhim: "); scanf("%d", &n);
	Hedgehog HedArr[n];
	NhapDSNhim(HedArr,n);
	//Xuat1Nhim(HedArr[0],1);
	XuatDSNhim(HedArr,n);
	CapNhatGia(HedArr, n);
	XuatDSNhim(HedArr, n);
	return 0;
}
