#include<stdio.h>

// Given a sorted array of integers and a target value, determine whether the target exists in the array using Binary Search.

int iterative_binary_search(int arr[], int low, int high, int target){
    
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid] == target)
			return mid;
		else if (target > arr[mid])
			low = mid+1;
		else 
			high = mid-1;
	}
	return -1;
}

int main(){
	int arr[] = {2, 4, 6, 8, 10, 12, 14};
	int n = sizeof(arr)/sizeof(arr[0]);
	int target = 10;
	int found = iterative_binary_search(arr, 0, n-1, target);
	if(found == -1)
		printf("Element not found.");
	else
		printf("Element found at index %d", found);
	return 0;
}
