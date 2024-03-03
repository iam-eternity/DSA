#include<iostream>
using namespace std;
int main() {
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    int arr[8] = {1,2,3,4,5,1,2,1};

    // PRECOMPUTE
    int hash[13] = {0};
    for (int i = 0; i < 8; i++) { // 2 3 4 5 2
        hash[arr[i]] += 1;
    }
//     for (auto val: hash) cout << val << " ";
//     cout << endl;
//     for (int i = 0; i < 8; i++)
//     {
//         if (hash[arr[i]] > 2) cout << hash[arr[i]];
//     }
    
// }
    int q = 3;
    // cin >> q;
    while (q--) {
        int num;
        cin >> num;
        cout << hash[num] << endl; 
    }
}
// //     string s;
// //     cin >> s; // abcaabd
// //     int hash[26] = {0};
// //     for (int i = 0; i < s.size(); i++)
// //     {
// //         /* code */
// //         hash[s[i] - 'a']++;
// //     }

    
// //     int q; 
// //     cin >> q;
// //     while (q--) {
// //         char c;
// //         cin >> c;
// //         // fetch
// //         cout << hash[c - 'a'] << endl;
// //     }
// }
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool containsDuplicate(vector<int>& nums) {
//     // Sort the array first
//     sort(nums.begin(), nums.end());

//     // Check for consecutive duplicate elements
//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] == nums[i + 1]) {
//             cout << "Duplicate(s) found : " << nums[i];
//             return true; // Duplicate found
//         }
//     }
//     return false; // No duplicates found
// }

// int main() {
//     vector<int> nums = {1, 2, 5, 5, 4, 3, 4};

//     if (containsDuplicate(nums)) {
//         cout << endl;
//     } else {
//         cout << "No duplicates found in the array.\n";
//     }

//     return 0;
// }