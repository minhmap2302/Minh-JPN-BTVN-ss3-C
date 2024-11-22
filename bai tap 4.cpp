#include<stdio.h>

int main(){
	float toan,van,anh,tong_diem,diem_trung_binh;
	printf("vui long nhap diem toan: ");
	scanf("%f", &toan);
	printf("vui long nhap diem van: ");
	scanf("%f", &van);
	printf("vui long nhap diem anh: ");
	scanf("%f", &anh);
	tong_diem = toan + van + anh;
	diem_trung_binh = ( toan + van + anh ) / 3;	
	printf("tong diem la %.2f\n diem trung binh la %.2f\n",tong_diem,diem_trung_binh);
	
	return 0;
}
