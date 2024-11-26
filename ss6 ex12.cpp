#include<stdio.h>
int main(){
	int a, number1=1, number2=1, number3, b=0;
	printf("Moi ban nhap so luong so fibonacci muon kiem tra : ");
	scanf("%d", &a);
	printf("%d   ",number1);
	printf("%d   ",number2);
	for(int i=1;i>0;i++){
		number3 = number1 + number2;
		number1 = number2 ;
		number2 = number3;
		number3 = number1 + number2;
		printf("%d   ",number3);
		b += 1;
		if(b==(a-2)){
			break;
		}
	}
	return 0;
}
