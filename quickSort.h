#pragma once
#include <iostream>
#include "partition.h"
using namespace std;
void quickSort(int arr[], int low, int high) {
	//base case
	if (low >= high) {
		return;
	}
	//pi is parition index arr[p]
	//is in right place
	int pi = partition(arr, low, high);
	//sort left
	quickSort(arr, low, pi - 1);
	//sort right
	quickSort(arr, pi + 1, high);
}