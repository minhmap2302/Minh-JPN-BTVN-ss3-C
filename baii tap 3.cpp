#include<stdio.h>

int main(){
	float Pi = 3.14,chu_vi,dien_tich,r;
	printf("vui long nhap ban kinh cho duong tron: ");
	scanf("%f", &r);
	chu_vi = 2 * Pi * r;
	dien_tich = Pi * r * 2;
	printf("chu vi la %.2f\n dien tich la %.2f\n",chu_vi,dien_tich);
	
	return 0;
}
