// list -> C++ List is a STL container that stores elements randomly in unrelated locations. To maintain sequential ordering, every list element includes two links:

// one that points to the previous element
// another that points to the next element
// list is implemented using doubly linked list
#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> l;
    list<int> n(5,100);
    for (int i: n) {
        cout<<i<<endl;
    }
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    cout<<"Before erase -> ";
    for(int  i: l) {
        cout<<i<< " ";
    }
    cout<<"After erase -> ";
    l.erase(l.begin());
    for(int  i: l) {
        cout<<i<< " ";
    } cout<<endl;

    cout<< "Size of list -> "<<l.size()<<endl;
}
