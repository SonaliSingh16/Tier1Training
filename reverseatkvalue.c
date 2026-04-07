#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	int temp[6],index=0;
	for(int i=n-k;i<n;i++){
		temp[index++]=arr[i];
	}
	for(int i=0;i<n-k;i++){
		temp[index++]=arr[i];
	}
	for(int i=0;i<n;i++){
		printf("%d",temp[i]);
	}
	return 0;  
}