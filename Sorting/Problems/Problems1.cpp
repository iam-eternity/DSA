// #include<iostream>
// using namespace std;
// int main() {
//     // LEFT ROTATE AN ARRAY BY 1 PLACE
//     // int arr[] = {1,2,3,4,5};
//     // int n = sizeof(arr) / sizeof(arr[0]);
//     //     int temp = arr[0];
//     // for (int i = 1; i < n; i++)
//     // {
//     //     /* code */
//     //     arr[i - 1] = arr[i];
//     // }
//     // arr[n-1]  = temp;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     /* code */
//     //     cout << arr[i] << " ";
//     // }

//     // ROTATE AN ARRAY BY K PLACES
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int d;
//     cin >> d;
//     d = d % n;
//     int temp[d];
//     for (int i = 0; i < d; i++)
//     {
//         temp[i] = arr[i];
//     }
//     for (int i = d; i < n; i++)
//     {
//         arr[i - d] = arr[i];
//     }
//     for (int i = n - d; i < n; i++)
//     {
//         arr[i] = temp[i-(n-d)];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
#include<iostream>
#include<vector>
using namespace std;

// ROTATE THE ARRAY BY K PALCES
// void rotate(int arr[], int k,int n) {
//     int temp[n];
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         temp[(i+k) % n] = arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = temp[i];
//     } 
// }

// CHECK IF THE ARRAY IS SORTED AND ROTATED
bool check(vector<int> & nums) {
    int count = 0;
    int n = nums.size();
    // 1. [1,2,3,4,5] 1 2. [3,4,5,1,2]  1 3. [5,1,3,2,4] 2 
    // arr[i-1] > arr[i] 
    for (int i = 1; i < n; i++) 
    {
        if (nums[i-1] > nums[i]) count++;
    }
    if (nums[n-1] > nums[0]) count++;

    return count <= 1;
    

}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    
}
int main() {
    // int arr[] = {1,2,3,4,5,6};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << arr.length() << endl;
    // rotate(arr, 3,n);
    // printArr(arr, n);
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(17);
    v.push_back(5);
    cout << "Is array sorted an rotated : " << check(v) << endl;
}

