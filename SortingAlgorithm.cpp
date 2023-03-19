#include <iostream>
#include "bubbleSort.h"
#include "selectionSort.h"
#include "insertionSort.h"
#include "mergeSort.h"
#include "countSort.h"
#include "quickSort.h"
#include "shellSort.h"
#include "radixSort.h"
using namespace std;

void print(int arr[], int n);


int main(void) {
    int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len << endl;
    //bubbleSort(arr, len);
    //selectionSort(arr, len);
    //insertionSort(arr, len);
    //mergeSort(arr, 0, len - 1);
    //countSort(arr, len);
    //quickSort(arr, 0, len - 1);
    //shellSort(arr, len);
    radixSort(arr, len);
    cout << "Sorted: ";
    print(arr, len);

    return 0;
}


void print(int arr[], int n) {
    cout << "[";
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            cout << arr[i] << ", ";
        }
        else {
            cout << arr[i] << "]";
        }
    }
    cout << endl;
}