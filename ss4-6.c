#include<stdio.h>

int main(){
	int sodiendauthang,sodiencuoithang,sum;
	int total = sodiencuoithang - sodiendauthang; 
	
	printf("Ban hay nhap so dien dau thang :");
	scanf("%d", &sodiendauthang);
	printf("Ban hay nhap so dien cuoi thang :");
	scanf("%d", &sodiencuoithang);
	
	total = sodiencuoithang - sodiendauthang;
	printf("Tong so dien thang nay la : %d - %d = %d", sodiencuoithang,sodiendauthang,total);
	
	 if (0<=total && total<50) {
	 	printf("Tinh 10.000/Kwh suy ra tien thang nay la: %d * 10000\n", total);
	 	sum = total * 10000; 
	 	printf("Tong tien la : %d ", sum);
		
	 }else if (50<=total && total<100) {
	 	printf("Tinh 15.000/Kwh suy ra tien thang nay la: %d * 15000\n", total);
	 	sum = total * 15000; 
	 	printf("Tong tien la : %d ", sum);
	 	
	 }else if (100<=total && total<150) {
	 	printf("Tinh 20.000/Kwh suy ra tien thang nay la: %d * 20000\n", total);
	 	sum = total * 20000; 
	 	printf("Tong tien la : %d ", sum);
	
	 }else if (150<=total && total<200) {
	 	printf("Tinh 25.000/Kwh suy ra tien thang nay la: %d * 25000\n", total);
	 	sum = total * 25000; 
	 	printf("Tong tien la : %d ", sum);
	 	
	 }else if (200<=total) {
	 	printf("Tinh 30.000/Kwh suy ra tien thang nay la: %d * 30000\n", total);
	 	sum = total * 30000; 
	 	printf("Tong tien la : %d ", sum);
	 }
	 
	return 0; 
}
