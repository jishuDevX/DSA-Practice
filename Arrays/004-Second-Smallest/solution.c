#include <stdio.h>
#include <limits.h>

// Given an array of integers, find the second smallest distinct element in the array.

int array_validation(int n){
	if(n < 2){
	    printf("No second smallest element exists.");
	    return 0;
	} 
	return 1;
}

int second_smallest(int arr[], int n){
	int i, smallest = INT_MAX, second_smallest =  INT_MAX;	
	for(i=0; i<n; i++){
		if(arr[i]<smallest){
		    second_smallest = smallest;
			smallest = arr[i];
		} else if (arr[i] < second_smallest && arr[i] != smallest){
				second_smallest = arr[i];
		}
	} return second_smallest;
}

int main(){
	int arr[] = {3, 8, 1, 10, 5};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int is_valid = array_validation(n);
	
	if (is_valid){
	int sec_smallest = second_smallest(arr, n);
	
	if(sec_smallest == INT_MAX)
		printf("No second smallest element exists.");
	else
		printf("second smallest element : %d", sec_smallest);		 
	}
	
	return 0;
}



