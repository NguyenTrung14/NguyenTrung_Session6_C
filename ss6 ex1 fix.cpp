#include<stdio.h>
int main(){
	int number1, number2, number3, number4, number5;
	printf("Moi ban nhap 5 so nguyen : \n");
	scanf("%d  %d  %d  %d  %d", &number1, &number2, &number3, &number4, &number5);
	int total=0;
	if(number1%2!=0){
		total += number1;
	}
	if(number2%2!=0){
		total += number2;
	}
	if(number3%2!=0){
		total += number3;
	}
	if(number4%2!=0){
		total += number4;
	}
	if(number5%2!=0){
		total += number5;
	}
	printf("Tong cac so le la : %d",total);
	return 0;
}
    
