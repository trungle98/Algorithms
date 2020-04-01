#include <stdio.h>
int main(){
	int n=0;
	scanf("%d", &n);
	int arr[n] ={};
	int nhapMang;
	for(int i = 0; i < n; i++){
	scanf("%d ", &nhapMang);
	arr[i] = nhapMang;
	printf("%d", arr[i]);
	}
	
}
