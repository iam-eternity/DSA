#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // In C++, vectors are used to store elements of similar data types. However, unlike arrays, the size of a vector can grow dynamically.

    // That is, we can change the size of the vector during the execution of a program as per our requirements.
    vector<int> v; // size  = 0 , Capacity tells the space assigned
    vector<int> a(5,1);
    vector<int> last(a);
    cout<< "print a : "<<endl;
    for (int  i: a) {
        cout<<i<<endl;
    }
    cout << "Size -> " << v.capacity() << endl;
    v.push_back(1);
    cout << "Size -> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Size -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Size -> " << v.capacity() << endl;
    cout << "Size -> " << v.size() << endl; // size :  Returns the number of elements in the vector.
    cout << "front -> " << v.front() << endl;
    cout << "back -> " << v.back() << endl;
    cout << "Element at 2nd index : " << v.at(2) << endl;
    cout << "before pop : " << endl;
    for (int i : v)
    { // range based loop
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "After pop : " << endl;
    for (int i : v)
    { // range based loop
        cout << i << " ";
    }
    cout << endl;
    // clear me size 0 hota h capacity o nhii hoti h
    cout << "Capacity before clear -> " << v.capacity() << endl;
    cout << "Size before clear -> " << v.size() << endl;

    v.clear();
    cout << "Capacity after clear -> " << v.capacity() << endl;
    cout << "Size after clear -> " << v.size() << endl;
}