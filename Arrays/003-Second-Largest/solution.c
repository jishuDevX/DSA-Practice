#include <stdio.h>
#include <limits.h>

//Given an array of integers, find the second largest distinct element in the array.

int array_validation(int n){	
	if (n<2){
		printf("No second largest element exists.");
		return 0;
	}
	return 1;
}

int second_largest_ele(int arr[], int n){
	int i, largest= INT_MIN, second_largest=INT_MIN;

	for(i=0; i<n; i++){
		if(arr[i] > largest){
			second_largest = largest;
			largest = arr[i];
			
		} else if (arr[i] > second_largest && arr[i] != largest){
			second_largest = arr[i];
		}	
	}
	
	return second_largest;
}


int main(){
	int arr[] = {3, 8, 1, 10, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int is_valid = array_validation(n);
	
	if (is_valid){
		int sec_largest = second_largest_ele(arr, n);
		
		if (sec_largest != INT_MIN){
		
			printf("Second largest number is : %d", sec_largest);
		}else{
			printf("No second largest element exists.");

		}
	}
	
	return 0;
}
