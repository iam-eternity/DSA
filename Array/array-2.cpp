#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int> arr) // 5 3 5 7 6 7 6
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i]; // 3
    }
    return ans;
}
int main()
{
    // int n;
    // cout << "Enter n : ";
    // cin >> n;
    // vector<int> arr(n,-1);
    // vector<int> arr1;
    // arr1.push_back(1);
    // arr1.push_back(2);
    // arr1.push_back(3);
    // arr1.push_back(4);
    // arr1.push_back(5);
    // int ans = arr1.size();
    // cout << "Size of arr1 : " << ans << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     /* code */
    //     cout << arr[i] << " ";
    // }
    //     cout << endl << arr.capacity() << endl;
    // cout << "Vector arr is empty or not : " << arr1.empty() << endl;
    // 1 -> FIND UNIQUE ELEMENT IN AN ARRAY
    // int n;
    // cout << "Enter n : ";
    // cin >> n;
    // vector<int> arr(n); // 1 2 3 2 1
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cin >> arr[i];
    // }
    // int uniqueElement = findUnique(arr);
    // cout << "Unique element is : " << uniqueElement << endl;
    /*
 XOR TABLE
0	0	0
0	1	1
1	0	1
1	1	0

    */
    // 2 -> UNION OF TWO ARRAYS
    vector<int> arr;
    int arr1[] = {1,2,4,5};
    int arr2[] = {9,4,5,5};
    int size1 = 4;
    int size2 = 4;

    for (int i = 0; i < size1; i++)
    {
        arr.push_back(arr1[i]);
    }
    for (int j = 0; j < size2; j++)
    {
        bool duplicate = false;
        for (int k = 0; k < arr.size(); k++)
        {
            if (arr2[j] == arr[k]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) arr.push_back(arr2[j]);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    // 3 -> INTERSECTION OF TWO ARRAYS
    // vector<int> arr;
    // int arr1[] = {1,3,3,4,5};
    // int arr2[] = {3,6,7,1,4};

    // int size = 5;
    // for (int i = 0; i < size; i++)
    // {
    //     int element = arr1[i];
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (element == arr2[j]) {
    //             arr2[j] = -1; // mark it bcz what if we enter an element two times in the array
    //             arr.push_back(element);
    //         }
    //     }
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // 4 -> PAIR SUM
    // int a[] = {1,3,5,7,2,4,6};
    // int size = 7;
    // int resSum = 8;
    // vector <int> arr;
    // for (int i = 0; i < size; i++)
    // {
    //     int element = a[i];
    //     int sum = 0;
    //     for (int j = 0; j < size; j++)
    //     {
    //         sum = element + a[j];
    //         if (sum == resSum) {
    //              arr.push_back(a[j]);
    //              arr.push_back(element);
    //                a[j] = -1;
    //                element = -1;
    //              break;
    //         }
    //     }
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //    vector <int> arr = {1,3,5,7,2,4,6};
    //    int sum = 9;
    //    for (int i = 0; i < arr.size(); i++) {
    //     for (int j = i  + 1; j < arr.size(); j++)
    //     {
    //         if (arr[i]+ arr[j] == sum) cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
    //     }
    //    }
    // 5 -> PAIR SUM (TRIPLET)
    // vector<int> arr = {1, 3, 5, 7, 2, 4, 6};
    // int sum = 11;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         for (int k = j + 1; k < arr.size(); k++)
    //         {
    //             if (arr[i] + arr[j] + arr[k] == sum ) cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" <<endl;
    //         }
    //     }
    // }
    // 6-> PAIR SUM (Four)
    // vector<int> arr = {1, 3, 5, 7, 2, 4, 6};
    // int sum = 11;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         for (int k = j + 1; k < arr.size(); k++)
    //         {
    //             for (int l = 0; l < arr.size(); l++)
    //             {
    //                                 if (arr[i] + arr[j] + arr[k] + arr[l] == sum ) cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << "," << arr[l] << ")" <<endl;
    //             }

    //         }
    //     }
    // }
    // 7 -> SORT 0'S AND 1'S (DUTCH FLAG PROBLEM)
    // TWO POINTER'S APPROACH
    // vector <int> arr = {1,0,1,0,1,0,0,1,0,1,1,1,0};
    // int end = arr.size() - 1;
    // int start = 0;
    // for (int i = start; i < end;)
    // {
    //     if (arr[start] == 0) {
    //         swap(arr[start], arr[i]);
    //         start++;
    //         i++;
    //     } else {
    //         swap(arr[i],arr[end]);
    //         end--;
    //     }
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // ARRAY-3
    // int arr[3][3];
    // int brr[3][3] = {{1,2,3},{2,3,4},{3,4,5}};
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cin >> arr[i][j];
    //     }
    // }
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << arr[j][i] << " "; // for row wise print use arr[i][j]
    //     }
    //     cout << endl;
    // }
    // 1 -> ROW SUM PRINT
    // int arr[3][3] = {{1, 2, 3}, 
    //                 {4, 11, 6}, 
    //                 {7, 8, 9}};
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum += arr[i][j];
    //     }
    //     cout << "Sum is -> " << sum << endl;
    // }
    /*
    int main()
{
    int arr[3][4] = {
        {1,2,3,4},
        {2,5,33,4},
        {9,11,3,-111}
    };
    int row = 3, col = 4;
    // int min = 111111111,max = -1111111;
    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < col; j++) {
    //         if (arr[i][j] >= max) max = arr[i][j];
    //         if (arr[i][j] <= min) min = arr[i][j];
    //     }
    // }
    // cout << "Max -> " << max << " Min -> " << min << endl;
    for (int i = 0; i < col; i++) {
        int row_sum = 0, col_sum = 0;
        for (int j = 0; j < row; j++) { // 0
            // row_sum += arr[i][j];
            col_sum += arr[j][i];
        }
        // cout << row_sum << " " <<endl;
       
    */
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum += arr[j][i];
    //     }
    //     cout << "Sum is -> " << sum << endl;
    // }
    // 2 -> LINEAR SEARCH
    // int target = 8;
    // bool isPresent = false;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (arr[i][j] == target) isPresent = true;
    //     }
    // }
    // if (isPresent) {
    //     cout << "Exists" << endl;
    // } else {
    //     cout << "Dosen't Exist" << endl;
    // }

    // 3 -> Max / Min 2D Array
    // int max = INT16_MIN;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (arr[i][j] >= max) max = arr[i][j];
    //     }
    // }
    // cout << max << endl;
    // 4 -> Transpose of a Maxtrix
    // int trans[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j= 0; j < 3; j++)
    //     {
    //         // swap(arr[i],arr[j]);
    //         trans[j][i] = arr[i][j];
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << trans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // 2-D Vector
    // vector<vector<int>> v;
    
    // vector<int> a{1,2,4};
    // vector<int> b{3,5,7};
    // vector<int> c{9,6,5};
    // v.push_back(a);
    // v.push_back(b);
    // v.push_back(c);
    // for (int i = 0; i < v.size(); i++) {
    //     for (int j = 0; j < v.size(); j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // } 
    // 1 -> SORT COLORS

    // 2 -> Move all -ve Numbers to left
    // vector <int> arr = {11,2,3,-1,-11,2,-4,-5,1,1,1,0};
    // int current = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] <= 0) {
    //         swap(arr[i] , arr[current]);
    //         current++;
    //     }
    // }
    // for (auto val : arr) {
    //     cout << val << " ";
    // }
    
}