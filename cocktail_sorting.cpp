#include <stdio.h>
int main(){
	int arr[] = {10,99,9,98,8,97,7,96,6,95,5,94,4,93,3,92,2,91,1,90,0};
	int i,j;
	int temp;
	int counter = 0;
	
	//sorts in ascending order
	//sorting order can be changed by changing two of the < , > marks in if conditions
	for(j=0;j<(sizeof(arr)/sizeof(i));j++){
		
		for(i=0;i<(sizeof(arr)/sizeof(i))-1;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];arr[i]=arr[i+1];arr[i+1]=temp;
				counter += 1;
			}
		}
		
		for(i=(sizeof(arr)/sizeof(i))-1;i>0;i--){
			if(arr[i]<arr[i-1]){
				temp=arr[i];arr[i]=arr[i-1];arr[i-1]=temp;
				counter += 1;
			}
		}
		
		if(counter == 0) break;
	}
	
	//printing sorted array
	for(i=0;i<sizeof(arr)/sizeof(i);i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
