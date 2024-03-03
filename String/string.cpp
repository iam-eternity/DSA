#include<iostream>
using namespace std;
bool checkEqual(int a[26], int b[26]) {
    for (int i = 0; i < 26; i++)
    {        
        /* code */
        if (a[i] != b[i]) return 0;
    }
    return 1; 
}

bool checkInclusion(string s1, string s2) {
    // character count array
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        /* code */
        int index = s1[i] - 'a';
        count1[index]++;
    }
    // traverse s2 string in window of size s1 length  and compare
    int i = 0;
    int count2[26] = {0};
    int windowSize = s1.length();
    // running for first window
    while(i < windowSize) {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (checkEqual(count1, count2)) {
        return 1;
    }
    while (i < s2.length())
    {
        /* code */
        char ch = s2[i] ;
        int index = ch - 'a';     
    }
}
int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout << checkInclusion(s1,s2) << endl;
}