#include <stdio.h>
int main(){
	int check=0, count = 0;
	double diem = 0.0, tong= 0.0;
	while(count < 5){
	if(count == 0){
	        scanf("%lf", &diem);
		tong = diem*0.6; 
		printf("diem assign nhap vao: %f ; tong: %f \n",diem, tong);
	}
	else{
        scanf("%lf", &diem);
        scanf("%d", &check);
	
		if(check == 0){
                tong = tong+(diem/4*0.4);
		             printf("check: %d ;diem nhap vao: %f ; tong: %f \n",check,diem, tong);
		}else if(check ==1){
		tong = tong+0.0;
		             printf("check: %d ;diem nhap vao: %f ; tong: %f \n",check,diem, tong);
		}
		
	}
	count++;
	}
	if(tong>=4.75){
		printf("pass");
	}else{
		printf("failed");
	}
	

}
