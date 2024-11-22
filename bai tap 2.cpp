#include<stdio.h>

int main(){
	float celsius,fahrenheit;
	printf("vui long nhap nhiet do hien tai(°C): ");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9.0 / 5.0) + 32;
	printf("nhiet do %2f°C tuong duong %2f°F\n",celsius, fahrenheit);
	return 0;
}
