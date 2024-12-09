#include<stdio.h>
int tong(int a,int b){
	return a+b;
	}
int main(){
     int so1,so2,kq;
     printf(" nhap so1");
     scanf("%d",&so1);
	printf(" nhap so2");
     scanf("%d",&so2);
     kq = tong(so1,so2);
     printf("%d",kq);
    return 0;
     }
