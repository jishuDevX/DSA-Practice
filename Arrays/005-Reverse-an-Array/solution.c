#include<stdio.h>

// Given an array of integers, reverse the elements in-place.


void print_array(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
}
void reverse_array(int arr[], int n){
	int start=0, end=n-1, temp;
	
	while(start<end){
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
		start++;
		end--;
		
	}
}


int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	print_array(arr, n);
	reverse_array(arr, n);
	print_array(arr, n);


	
	return 0;
}
