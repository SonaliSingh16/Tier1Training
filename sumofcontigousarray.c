#include<stdio.h>
#include<limits.h>
int main(){
	int arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int currSum=arr[0];
	int maxSum=arr[0];
	int start=0,end=0,temp=0;
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]>currSum+arr[i]){
		
		currSum=arr[i];
		temp=i;
	}
		
		else{
		
		currSum+=arr[i];
	}
		
		if(currSum>maxSum){
		
		maxSum=currSum;
		start=temp;
		end=i;
	}
	}
	printf("largest sum contigous subarray=%d\n",maxSum);
	printf("subarray range=[%d ,%d]\n",start,end);
	return 0;
	
}