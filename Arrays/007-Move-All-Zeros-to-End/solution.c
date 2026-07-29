#include<stdio.h>

// Given an array of integers, move all the 0s to the end of the array while maintaining the relative order of the non-zero elements.

void print_array(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void move_all_zeros_to_end(int arr[], int n){
	int i, j=0;
	
	for(i=0; i<n; i++){
		if(arr[i] != 0){
			arr[j] = arr[i]; // Copy all non-zero elements to the front.
			j++;
		}
	}
	while(j<n){
		arr[j] = 0; // Fill remaining positions with zeros.
		j++;
	}
}

int main(){
		
	int arr[] = {0, 1, 0, 3, 12}; //output {1, 3, 12, 0, 0}
	int n = sizeof(arr)/sizeof(arr[0]);
	print_array(arr, n);
	move_all_zeros_to_end(arr, n);
	print_array(arr, n);

	
		
	return 0;
}
