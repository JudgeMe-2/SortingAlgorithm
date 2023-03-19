#pragma once
#include <iostream>
using namespace std;
int partition(int arr[], int low, int high) {
	int pivot = arr[high]; //pivot
	int i = (low - 1); //starting index
	int j; //test index
	for (j = low; j <= high - 1; j++) {
		//j elements smaller than pivot
		//is swapped with starting index
		//increments after each swap
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	//swap pivot with
	//right of current i
	swap(arr[i + 1], arr[high]);
	//return paritition index
	return (i + 1);
}
