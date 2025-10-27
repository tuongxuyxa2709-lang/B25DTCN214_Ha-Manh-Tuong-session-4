#include<stdio.h>
int main () {
	int so;
	printf("nhap so dien");
	scanf("%d",&so);
	if(0<so<50) {
		int tien = so * 10000;
		printf ("tien dien la %d",tien);
	}
	else if (50<so<100) {
		int tien2 = so * 15000;
		printf("tien dien la %d",tien2);
	}
	else if (100<so<150) {
		int tien3 = so*20000;
		printf("tien dien la",tien3);	
	}
	else if (150<so<200) {
		int tien4 = so*25000;
		printf("tien dien la",tien4);
	}
	else if (so>200) {
	    int tien5 = so*30000;
	    printf("tien dien la",tien5);
	}
	else {
		printf("so ko hop le");
	}
	return 0;
}
