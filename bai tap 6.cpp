#include<stdio.h>

int main(){
	float canh_day,chieu_cao,dien_tich;
	printf("vui long nhap canh_day,: ");
	scanf("%f", &canh_day);
	printf("vui long nhap diem chieu cao: ");
	scanf("%f", &chieu_cao);
	dien_tich = 0.5 * canh_day * chieu_cao;
		
	printf("dien tich cua tam giac la %.2f\n",dien_tich);
	
	return 0;
}
