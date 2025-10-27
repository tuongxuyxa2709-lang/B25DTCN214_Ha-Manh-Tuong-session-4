#include<stdio.h>
int main () {
    int so;
    printf("moi ban nhap nam");
    scanf("%d",&so);
    if (so % 4 ==0) {
    	printf("nam nhuan");
	}
	else if (so % 400==0) {
		printf("nam nhuan");
	}
	else {
	printf("khong nhuan");
	}
	
	return 0;
}
