#include<iostream>
#include<array>
using namespace std;

int main() {
    int basic[3] = {1,2,3};
    array<int, 4> a = {1,2,3,4}; // implementation fixed type ke static array se hoti h
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd index : " << a[1]<<endl; //   O(1)
    cout<<"Empty or not : "<<a.empty()<<endl; //   O(1)
    cout<<"First Element : "<<a.front()<<endl; //   O(1)
    cout<<"Last Element : "<<a.back()<<endl; //   O(1)

}