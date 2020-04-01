#include <stdio.h>
int main(int argc,char* argv[]){

	int arrTien[] ={500, 200, 100, 50, 20, 10};
	int SoTien = atoi(argv[1]);
	int soLuongTien = 0;
	for(int i =0; i<6; i++){
	
		while(SoTien>=arrTien[i]){
			soLuongTien++;

			SoTien=SoTien-arrTien[i];
		}
		if(soLuongTien>0){
		printf("%d %d \n",arrTien[i], soLuongTien);
		soLuongTien = 0;
		}
	}
}
