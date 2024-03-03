// Set -> Ins et every element must be unique
// modification nhii hoti Implementation using BST


#include<iostream>
#include<set>
using namespace std;
int main() {
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(2);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    for (auto i : s) {
        cout<< i << " ";
    } cout<<endl;
    s.erase(s.begin());
    for (auto i : s) {
        cout<< i << " ";
    } cout<<endl;
    // COUNT CHECKS WHETHER ELEMENT IS PRESENT OR NOT
    cout<<s.count(5)<<endl;
    // FIND RETURNS ITERATOR
    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it!= s.end();it++) {
        cout<<*it<<" ";

    } cout<<endl;
    cout<<"value present at itr -> "<<*itr<<endl;
}