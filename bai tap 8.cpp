#include <stdio.h>

int main(){
	int number, hn, ht, hc, hdv;
	printf("moi ban nhap so co 4 chu so : ");
	scanf("%d", &number);
	hn = number / 1000;
	ht = (number - hn * 1000) / 100;
	hc = (number - hn * 1000 - ht * 100 ) / 10;
	hdv = (number - hn * 1000 - ht * 100 - hc * 10);
	int result = hn + ht + hc + hdv;
	printf("Tong = %d\n", result);
	return 0;
}
