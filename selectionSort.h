#pragma once
#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    int min;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(arr[i], arr[min]);
        }
    }
}
