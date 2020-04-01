#include <stdio.h>
int main(){
	double diem = 0.0;
	scanf("%lf", &diem);
	int phanNguyen = (int) diem;
	double hieuSo = diem-phanNguyen;
	if(hieuSo < 0.25){
	printf("%.1lf", (double)phanNguyen);
	}
	else if(hieuSo < 0.75){
	printf("%d.5",phanNguyen);
	}
	else{
	printf("%d.0", phanNguyen+1);
	}

	return 0;

}
