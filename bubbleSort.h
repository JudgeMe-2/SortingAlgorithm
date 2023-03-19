#pragma once
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    // Implementation method 1
    // for(int i = 0; i < n-1; i++) {
    //     for(int j = 0; j < n - i-1; j++) {
    //         if(arr[j] > arr[j+1]) {
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }

    //Implementation method 2
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

}