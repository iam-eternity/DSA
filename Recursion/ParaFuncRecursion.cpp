// Parameterized and Functional Recursion

#include <iostream>
using namespace std;
// Parameterized Recursion
// void printSum(int i, int sum) {
//     if (i < 1) {
//         co ut <<"Sum is -> "<< sum<<endl;
//         return;
//     }
//     printSum(i - 1, sum + i);
// }

// Functional Recursion
// int calcSum(int n) {
//     if (n == 1) return 1;
//     return n + calcSum(n - 1);
// }

// Factorial of N -> TC -> O(N) SC -> O(N)
// int fact(int n) {
//     if (n == 0) return 1;
//     return n * fact(n - 1);
// }

//  REVERSE AN ARRAY
// void revArr(int arr[],int start,int end) {
//     if (start >= end) return;
//     swap(arr[start],arr[end]);
//     revArr(arr,start + 1,end - 1);
// }
// void revArr(int arr[],int i,int n) {
//     if (i >= n / 2) return;
//     swap(arr[i],arr[n - i - 1]);
//     revArr(arr,i + 1,n);
// }

// CHECK IF STRING IS PALINDROME OR NOT
// bool checkPalin(string s, int i)
// {
//     if (i >= s.size() / 2)
//         return true;
//     if (s[i] != s[s.size() - i - 1])
//         return false;
//     return checkPalin(s, i + 1);
// }

// void printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// MULTIPLE RECURSION CALLS

// nth FIBONNACI NUMBER
// int fib(int n) {
//     if (n <= 1) return n;
//     int last = fib(n - 1);
//     int secondLast = fib(n - 2);
//     return last + secondLast;
// }

int main()
{
    // printSum(3,0);
    // cout << calcSum(5) << endl;
    // cout << fact(6) << endl;
    // int n = 5;
    // int arr[] = {1,2,3,4,5};
    // revArr(arr,0,n);
    // printArr(arr,n);
    // cout << checkPalin("tweet", 0);
    // cout<< fib(4) << endl;

}