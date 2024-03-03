// Recursion -> When a function calls itself until a specified condition is met
/*
Important Topics
Recursion
Base Case
Stack space / Stack Overflow
Recursion Tree
*/
#include <iostream>
using namespace std;
// int count = 0;
// void printOne() {
//     if (count == 5) {
//         return;
//     }
//     cout<<"One "<<count<<endl;
//     count++;
//     printOne();
// }
// int main() {
//     printOne();
// }

// BASIC PROBLEMS IN RECURSION
// 1 -> PRINT NAME N TIMES using recursion
// void printName(int i , int n) { // Time Complexity -> O(N)
//     if (i > n) { // Base case
//         return;
//     }
//     cout<< "Name is -> "<<"Aakash"<<endl;
//     printName(i + 1,n);
// }
// 2-> PRINT LINEALLY 1 TO N
// void printNum(int i,int n) {
//     if (i > n) {
//         return;
//     }
//     cout<<i<<" ";
//     printNum(i + 1,n);
// }
// 3 -> PRINT IN TERMS OF N TO 1
// void printRevNum(int i ,int n) {
//     if (i < 1) {
//         return;
//     }
//     cout<< i<< " ";
//     printRevNum(i - 1,n);
// }
// 4 -> PRINT FROM 1 TO N (BACKTRACKING) // Making sure print line after function call bcz this wiil only be executed if base case is true
// void printIterat(int i, int n)
// {
//     if (i < 1)
//     {
//         return;
//     }
//     printIterat(i - 1, n);
//     cout << i << " ";
// }
// 5 - > PRINT FROM N TO 1 (BACKTRACKING)
// void printRevIterat(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     printRevIterat(i + 1, n);
//     cout << i << " ";
// }

// int main()
// {
    // int n;
    // cout<< "Type the value of n -> ";
    // cin >> n;
    // printName(1,n);
    // int n;
    // cin >> n;
    // printNum(1,n);
    // printRevNum(n,n);
    // printIterat(n, n);
    // printRevIterat(1,n);
    
// }