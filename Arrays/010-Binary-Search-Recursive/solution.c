#include <stdio.h>

// Given a sorted array of integers and a target value, determine whether the target exists in the array using Recursive Binary Search.

int recursive_binary_search(int arr[], int low, int high, int target){
	if (low>high)
		return -1;
		
	int mid = low+(high-low)/2;
	
	
	if(arr[mid] == target)
		return mid;

	if (arr[mid] > target)
		return recursive_binary_search(arr, low, mid-1, target);
	
	return recursive_binary_search(arr,  mid+1, high, target);

}


int main(){
	int arr[] = {2, 4, 6, 8, 10, 12, 14};
	int target = 12;
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = recursive_binary_search(arr, 0, n-1, target);
	
	if(result == -1)
		printf("Element not found.");
	else
		printf("Element found at index %d", result);
}
