#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	printf("Moi ban nhap a : ");
	scanf("%f", &a);
	printf("Moi ban nhap b : ");
	scanf("%f", &b);
	printf("Moi ban nhap c : ");
	scanf("%f", &c);
	float total, total2;
	float delta;
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh bac 2 co vo so nghiem ");
			} else {
				printf("Phuong trinh bac 2 vo nghiem ");
			}
		} else {
			total = -c / b;
			printf("x = %.2f ",total);
		}
	} else {
		delta = b*b - 4*a*c;
		if(delta<0){
			printf("Phuong trinh bac 2 vo nghiem ");
		} else if(delta==0){
			total = -b / (2*a);
			printf("Phuong trinh bac 2 co 1 nghiem kep x = %.2f",total);
		} else{
			total = (-b-sqrt(delta)) / (2*a);
			total2 = (-b+sqrt(delta)) / (2*a);
			printf("Phuong trinh bac 2 co 2 nghiem phan biet : \nx1 = %.2f \nx2 = %.2f",total ,total2);
		}
	}
	return 0;
}
