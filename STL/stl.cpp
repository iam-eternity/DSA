#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b) {
    return a + b;
}
// Pairs are a part of utility library
void explainPair() {
    pair<int, int> p = {1, 3};
    cout<< p.first << " " << p.second<<endl;
    pair<int, pair<int, int>> q = {1, {3, 4}};
    pair<int, int> arr[] = {{1,2},{2,3},{3,4}};
    cout<<arr[i]<<endl;
    cout<< q.first << q.second.second << " "<< q.second.first;
}
void explainVectors() { // arays are constant in size whereas vector is dynamic in nature , we can increase the size whenever we want to 
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int> vec;
    vec.push_back({1,2});
    vec.emplace_back(2,3);

    vecotr<int> v(5,100);
    vecotr<int> v(5);
    vecotr<int> v1(5,20);
    vecotr<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) <<" ";
    it += 2;
    cout << *(it) <<" ";
    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();
    cout<<v[0] << " " << v.at(0);
    cout<< v.back() << " ";
    for(vector<int>::iterator it = v.begin(); it!= v.endl();it++) {
        cout<<*(it)<<" ";
    }
    for(auto it= v.begin(); it!= v.endl();it++) {
        cout<<*(it)<<" ";
    }
    for (auto it: v) {
        cout<< it<< " ";
    }
    v.erase(v.begin() + 1);
    v.erase(v.begin() + 2,v.begin() + 4); // [start,end]

    // Insert in vector
    vector<int>(2,100);
    v.insert(v.begin(), 300);
    v.insert(v.begin() + 1, 2, 10);
     


}
int main() {
    cout<< "Sum is : " <<sum(5,6)<<endl;
    explainPair();
    return 0;
}
