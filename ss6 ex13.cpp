#include<stdio.h>
int main(){
	int date, month;
	printf("Moi ban nhap ngay sinh cua ban : ");
	scanf("%d", &date);
	printf("Moi ban nhap thang sinh cua ban : ");
	scanf("%d", &month);
	switch(month){
		case 1:
			if(date <20){
				printf("Ban thuoc cung Ma Ket");
			} else{
				printf("Ban thuoc cung Bao Binh");
			}
			break;
		case 2:
			if(date<19){
				printf("Ban thuoc cung Bao Binh");
			} else{
				printf("Ban thuoc cung Song Ngu");
			}
			break;
		case 3:
			if(date<21){
				printf("Ban thuoc cung Song Ngu");
			} else{
				printf("Ban thuoc cung Bach Duong");
			}
			break;
		case 4:
			if(date<21){
				printf("Ban thuoc cung Bach Duong");
			} else{
				printf("Ban thuoc cung Kim Nguu");
			}
			break;
		case 5:
			if(date<21){
				printf("Ban thuoc cung Kim Nguu");
			} else{
				printf("Ban thuoc cung Song Tu");
			}
			break;
		case 6:
			if(date<22){
				printf("Ban thuoc cung Song Tu");
			} else{
				printf("Ban thuoc cung Cu Giai");
			}
			break;
		case 7:
			if(date<23){
				printf("Ban thuoc cung Cu Giai");
			} else{
				printf("Ban thuoc cung Su Tu");
			}
			break;
		case 8:
			if(date<23){
				printf("Ban thuoc cung Su Tu");
			} else{
				printf("Ban thuoc cung Xu Nu");
			}
			break;
		case 9:
			if(date<23){
				printf("Ban thuoc cung Xu Nu");
			} else{
				printf("Ban thuoc cung Thien Binh");
			}
			break;
		case 10:
			if(date<24){
				printf("Ban thuoc cung Thien Binh");
			} else{
				printf("Ban thuoc cung Bo Cap");
			}
			break;
		case 11:
			if(date<23){
				printf("Ban thuoc cung Bo Cap");
			} else{
				printf("Ban thuoc cung Nhan Ma");
			}
			break;
		case 12:
			if(date<22){
				printf("Ban thuoc cung Nhan Ma");
			} else{
				printf("Ban thuoc cung Ma Ket");
			}
			break;
		default:
			printf("Sai dinh dang");
	}
	return 0;
}
