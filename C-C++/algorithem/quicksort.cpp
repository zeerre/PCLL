//*************************************************************************
//* File Name: quicksort.cpp
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2022-11-02  20-22-29====
//*************************************************************************

#include <iostream>
using namespace std;
int num=0;
int partition(int arr[], int start, int end){
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {

        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    num++;
    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}

int main()
{

    int arr[] = { 9, 3, 4, 2, 1, 8, 12, 92, 32, 52, 76};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n );
    cout<<"Sort by :"<<num<<" times."<<endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}
