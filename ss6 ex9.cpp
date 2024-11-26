#include<stdio.h>
int main(){
	int number;
	int number1;
	for(number=100;number<1000;number++){
		number1 = ((number/100) * (number/100) * (number/100))+((number%100/10) * (number%100/10) * (number%100/10))+((number%10)*(number%10)*(number%10));
		if(number1 == number){
			printf("%d\n",number);
		} 
	}
	return 0;
}
