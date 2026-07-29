#include<stdio.h>

// Given an array of integers, determine whether the array is sorted in ascending order.

int is_sorted(int arr[], int n){
	int i;
	for(i=0; i<n-1; i++){
		if(arr[i]>arr[i+1]) // Compare each element with the next element.
			return 0;
	}return 1;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = is_sorted(arr, n);
	if(result)
		printf("Array is sorted");
	else
		printf("Array is not sorted");
	
	
	return 0;
}
