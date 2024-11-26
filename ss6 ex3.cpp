#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
  char password[]="camonrikkei";
  char check[30];
  printf("Moi ban nhap mat khau : ");
  scanf("%s",check);
  for(int i=0;i<strlen(check);i++){
    if(check[i]!=password[i]){
      printf("Mat khau khong hop le!");
      return 0;
    }
  }
  printf("Mat khau hop le!");
  return 0;
}
