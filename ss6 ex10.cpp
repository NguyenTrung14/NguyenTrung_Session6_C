#include<stdio.h>
int main(){
	int number, a;
	int b=0;
	printf("Moi ban nhap mot so nguyen : ");
	scanf("%d", &number);
	a = number / 2;
	for(int i=2;i<=a;i++){
		if(number%i==0){
			printf("Day khong phai so nguyen to");
			b=1;
			break;
		}
		}
		if(b==0){
			printf("Day la so nguyen to ");
		}
    return 0;
	}

