#include<stdio.h>
int main() {
	int a;
	int b;
	int c;
	printf("moi ban nhap canh a :");
	scanf("%d",&a);
	printf("moi ban nhap canh b :");
	scanf("%d",&b);
	printf("moi ban nhap canh c :");
	scanf("%d",&c);
	if(a+b>c && b+c>a && c+a>b) {
		printf("la 3 canh cua tam giac");
	}
	else {
		printf("khong phai 3 canh cua tam giac");
	}
	
	
	return 0;
}
