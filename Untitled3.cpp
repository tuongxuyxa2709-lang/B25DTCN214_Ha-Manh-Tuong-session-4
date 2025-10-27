#include<stdio.h>;
int main (){
	int so;
	printf("moi ban nhap so");
	scanf("%d",&so);
	if(so % 15 ==0) {
		printf("chia het cho 3 va 5");
	}
		else if (so % 5 ==0) {
			printf("chia het cho 5");
		}
			else if (so % 3 ==0) {
				printf("chia het cho 3");
		} 
		else {
			
			printf("ok");
		}
		
	return 0;
	}
