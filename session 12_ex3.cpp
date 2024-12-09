#include<stdio.h>
long long giaithua(int n){
	if(n<0){
		printf(" gia thua khong xac dinh so am");
		return 0;
		}
		long long giaithuamang[21];
		giaithuamang[0]=1;
		 
		for (int i=1;i<=20;i++){
		giaithuamang[i]=giaithuamang[i-1]*i;
		}
		if (n<=20){
		return giaithuamang[n];
		} else {
		printf(" giai thua khong vuot qua 20");
		return 0;
		}
		}
int main(){
	int so;
	printf(" nhap vao 1 so nguyen");
	scanf("%d",&so);
	long long ketqua=giaithua(so);
	if(so>=0||so<=20){
		printf(" giai thua %llu\n",ketqua);
		}
		 return 0;
		 }
