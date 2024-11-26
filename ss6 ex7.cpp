#include<stdio.h>
int main(){
	int number;
	printf("Moi ban nhap mot so nguyen : ");
	scanf("%d", &number);
	printf("Uoc cua so ban vua nhap la : ");
	for(int i=number;i<(number+1);i--){
		if(number%i==0){
			printf("\n%d",i);
		}
	}
	return 0;
}
