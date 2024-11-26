
#include<stdio.h>
int main(){
	float sentin, receiveback, money;
	printf("Moi ban nhap vao so tien gui ngan hang ban dau : ");
	scanf("%f", &sentin);
	receiveback = sentin * 0.01 ;
	money = sentin + receiveback;
	receiveback = money * 0.01 ;
	money = money + receiveback;
	receiveback = money * 0.01 ;
	money = money + receiveback;
	money = money - 1000 * (sentin / 1000);
	printf("Tien lai sau 3 thang gui ngan hang la : %.3f\n",money);
	money = money + 1000 * (sentin / 1000);
	printf("Tien ban nhan duoc sau 3 thang gui ngan hang la : %.3f",money);
	return 0;
}
