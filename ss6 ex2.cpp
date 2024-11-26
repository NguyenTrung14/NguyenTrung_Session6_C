#include<stdio.h>
int main(){
	int chan=0, le=0;
	int number1, number2, number3, number4, number5;
	printf("Moi ban nhap 5 so nguyen : \n");
	scanf("%d  %d  %d  %d  %d", &number1, &number2, &number3, &number4, &number5);
	if(number1 % 2 == 0){
		chan += 1;
	} else {
		le += 1;
	}
	if(number2 % 2 == 0){
		chan += 1;
	} else {
		le += 1;
	}
	if(number3 % 2 == 0){
		chan += 1;
	} else {
		le += 1;
	}
	if(number4 % 2 == 0){
		chan += 1;
	} else {
		le += 1;
	}
	if(number5 % 2 == 0){
		chan += 1;
	} else {
		le += 1;
	}
	printf("So luong so chan la : %d\n",chan);
	printf("So luong so le la : %d",le);
	return 0;
}
