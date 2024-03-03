#include <iostream>
#include <set>
using namespace std;
// CHECK IF THE ARRAY IS SORTED
bool isSorted(int arr[])
{
    for (int i = 1; i < 8; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return true;
}
// SECOND SMALLEST NUMBER IN THE ARRAY
int isSmall(int arr[])
{
    int smallest = arr[0];
    int secSmall = -1;
    for (int i = 1; i < 7; i++)
    {
        if (arr[i] < smallest)
        {
            secSmall = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < secSmall)
        {
            secSmall = arr[i];
        }
    }
    return secSmall;
}
// SECOND LARGEST NUMBER IN THE ARRAY
int second_large(int arr[])
{
    int largest = arr[0];
    for (int i = 0; i < 7; i++)
    {
        /* code */
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int second_largest = -1;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
}
// REMOVE THE DUPLICATES FROM ARRAY
// BRUTE FORCE
void remDup(int arr[], int n)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int index = 0;
    for (auto it : st)
    {
        arr[index] = it;
        index++;
    }
    for (int i = 0; i < index; i++) {
        cout << arr[i] << " ";
    }
}
int main() {

    // cout << second_largest << endl;
    int arr[] = {19, 3, 12, 17, 5, 8, 11};
    int arra[] = {1, 2, 2, 3, 3, 3, 4, 4};
    int arr1[] = {1, 1, 2, 2, 3, 3, 3, 4, 5, 5, 5,6,6,7,8,8,8};
    // int largest = arr[0];
    // int secLarge = -1;
    // for (int i = 1; i < 7; i++) {
    //     if (arr[i] > largest) {
    //         secLarge = largest;
    //         largest = arr[i];
    //     } else if (arr[i] < largest && arr[i] > secLarge) {
    //         secLarge = arr[i];
    //     }
    // }

    // cout << secSmall << endl;
    // cout << INT16_MIN << endl;
    // cout << isSmall(arr) << endl;
    // cout << second_large(arr) << endl;
    // CHECK IF THE ARRAY IS SORTED
    // cout << isSorted(arr)<<endl;
    remDup(arr1, 17);
}
