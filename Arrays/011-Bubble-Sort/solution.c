#include<stdio.h>

// Given an array of integers, sort the array in ascending order using the Bubble Sort algorithm.

void print_array(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


void bubble_sort(int arr[], int n){
	int i, j;
	
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1])
				swap(&arr[j], &arr[j+1]);
		}
	} 
}


int main(){
	
	int arr[] = {2, 5, 8, 1, 9};
	int n = sizeof(arr)/sizeof(arr[0]);

	print_array(arr, n);
	bubble_sort(arr, n);
	print_array(arr, n);

	return 0;
}
