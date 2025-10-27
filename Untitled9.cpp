#include<stdio.h>
int main () {
	int a;
	int b;
	int c;
	printf("moi ban nhap ngay :");
	scanf("%d",&a);
	printf("moi ban nhap thang :");
	scanf("%d",&b);
	printf("moi ban nhap nam :");
	scanf("%d",&c);
	int hople = 1;
	if (a<1  || a>32 || b>13 || b<1 ) {
		hople = 0;
	}
	else if (b == 1 || b == 3 || b ==5 || b ==7 || b == 8 || b == 10 || b ==12) {
		if (a>31)
		hople =0;	
	}
	else if (b == 4 || b ==6 || b==9 || b ==11) {
		if (a>30)
		hople = 0;
	}
	else if (b ==2) {

	 if (c % 4 ==0 && c % 100 !=0 || c % 400 ==0) 
		if (a>29)
		hople =0;
	}
	else {
	    if (a>28)
	    hople = 0;
	}
	
	if(hople)
	printf("ngay thang nam hop ly");
	 else
	  printf("Ngay thang nam khong hop le\n");
	
	return 0;
}

