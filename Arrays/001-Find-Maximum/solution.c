#include <stdio.h>

//Find Maximum Element in an Array

int max_ele(int a[], int n, int i, int max){
	
	if (i==n)
		return max;
		
	if (a[i]> max)
		max = a[i];
		
	return max_ele(a, n, i+1, max);			
}

int main(){
	int arr[] = {-1, 0, -1, 20, 100, 700};
	int n = sizeof(arr)/sizeof(arr[0]);

	int max = max_ele(arr, n, 1, arr[0]);
	printf("max = %d", max);
	
	return 0;
}


 
