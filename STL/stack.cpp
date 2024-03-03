/*
Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only.  Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements. 
*/
#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> s;
    s.push("Aakash");
    s.push("Anmol");
    s.push("Tushar");
    s.push("Mannan");
    cout<<"Top element -> "<<s.top()<<endl;
    s.pop();
    cout<<"Top element -> "<<s.top()<<endl;
    while (!s.empty())
    {
        /* code */
        cout<<s.top()<<" ";
        s.pop();
    }
    

}