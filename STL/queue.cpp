/*
Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front. Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.
*/

#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<string> q;
    q.push("Sharma");
    q.push("Aakash");
    q.push("Agarwal");
    q.push("Anmol");
    cout<<"First Element -> "<< q.front()<<endl;
    q.pop();
    cout<<"First Element -> "<< q.front()<<endl;
}