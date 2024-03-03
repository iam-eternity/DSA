#include<iostream>
using namespace std;

// {12, 20,16, 18, 30, 35}
int partition(int arr[], int first, int last) { //0  //1 
    int pivot = arr[last]; // 16
    int i = first - 1;//[]   // for inserting elements < pivot
    int j = first; //12  // for finding elements < pivot

    for (;j < last; j++) { // 0
        if (arr[j] < pivot) { 
            i++; // 
            swap(arr[i],arr[j]); // 14 []
        }
    }
    // now i is pointing to the last element < pivot
    // correct position of pivot will be -> i + 1
    swap(arr[i + 1], arr[last]);
    return i + 1;
    // 14 3 5 2 18

}

void quickSort(int arr[], int first, int last) { // 0 // 5
    // base case
    if (first >= last) return;
    // recursive case
    int pi = partition(arr, first, last); // 4  // 2  //  // 
    quickSort(arr, first, pi - 1); //0  //0  // 
    quickSort(arr, pi + 1, last); //5  // 5 

}
int main() {
    // QUICK SORT
    // Pick a pivot & place it in it's correct place in the counted array
    int arr[] = {20, 12,35, 16 ,18, 30};
    cout << sizeof(arr[0]) << " " << sizeof(arr)<<endl;
    int n = sizeof(arr) / sizeof(arr[0]); // 6
    quickSort(arr,0, n-1); // 0 // 5
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}