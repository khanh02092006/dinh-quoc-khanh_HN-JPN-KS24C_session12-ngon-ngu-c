#include<stdio.h>{
void inmang(int mang[],int n){
	printf(" cac phan tu co trong mang \n");
	for (int i=0;i<n;i++){
		printf("%d",mang[i]);
		}
		}
int main(){
	int n;
	printf(" nhap so luong phan tu ");
	scanf("%d",&n);
	int mang[n];
	for (int i=0;i<n;i++){
		printf(" nhap phan tu thu %d",i+1);
		scanf("%d",&mang[i]);
		}
		inmang(mang,n);
		return 0;
		}
		
