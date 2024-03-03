#include<iostream>
using namespace std;
// void selection_sort(int arr[], int n) {
//     // SELECTION SORT   // 7 2 0 11 9
//     for (int i = 0 ; i < n-1 ;i++) { // Array runs from 0 to n-1 // 0
//         int mini = i; // 0
//         for (int j = i; j < n; j++) // 0
//         {
//             /* code */
//             if (arr[j] < arr[mini]) { // 2 < 7
//                 mini = j;  // 1
//             }

//         }
//             int temp = arr[mini];
//             arr[mini] = arr[i]; 
//             arr[i] = temp; 
//     } 
// }
// BUBBLE SORTING
// void bubble_sort(int arr[], int n) {
//     for (int i = n - 1; i >= 1; i--) {
//         int didSwap = 0;
//         for (int j = 0; j <= i; j++)
//         {
//             /* code */
//             if (arr[j] >= arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp; 
//                 didSwap = 1;
//             }
//         }
//         if (didSwap == 0)  {
//             break;
//         }
//     }
// }    

// INSERTION SORT
// Take an element and place it in it's current order
void insertion_Sort(int arr[], int n) {
    for (int i = 0; i <= n-1; i++)
    {
        /* code */
        int j = i;
        while (j > 0 && arr[j-1] > arr[j])
        {
            /* code */
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
}
int main() {
    
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // SELECTION SORT
    // get the minimum and swap it
    // selection_sort(arr, n);
    // bubble_sort(arr, n);
    insertion_Sort(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}