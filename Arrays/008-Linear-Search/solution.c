#include<stdio.h>

//Given an array of integers and a target value, determine whether the target exists in the array.

int linear_search(int arr[], int n, int target){
	int i;
	for(i=0; i<n; i++){
		if(arr[i]==target)
			return i;
	}
	return -1;
}

int main(){
	int arr[] = {5, 8, 2, 10, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int target = 10;
	int found = linear_search(arr, n, target);
	if(found == -1)
		printf("Element not found.");
	else
		printf("Element found at index %d", found);
	
	return 0;
}
