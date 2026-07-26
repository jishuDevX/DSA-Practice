#include <stdio.h>

// Given an array of integers, find the smallest element in the array.

int array_validation(int n){
	if (n<1){
		printf("Array size should be at least 1");
		return 0;
	}
	return 1;
}

int min_ele(int arr[], int n){
	
	int min = arr[0];
	int i;
	
	for(i=1; i<n; i++){
		if(arr[i]<min)
			min = arr[i];
	}
	return min;
}
	
int main(){
	
	int arr[] = {3, 8, -2, 10, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int is_valid = array_validation(n);
	
	if (is_valid){
		int min = min_ele(arr, n);
		printf("Minimum number is : %d", min);
	}
	
	
	
	return 0;
}
