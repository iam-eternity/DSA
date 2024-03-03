// dequeue -> In C++, the STL deque is a sequential container that provides the functionality of a double-ended queue data structure.

// In a regular queue, elements are added from the rear and removed from the front. However, in a deque, we can insert and remove elements from both the front and rear.
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(5);
    d.push_front(6);
    for (int i : d)
    {
        cout << i << " ";
    }
    d.pop_back();
    d.pop_front();
    cout << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Print First Index Element -> " << d.at(0) << endl;
    cout << "Front -> " << d.front() << endl;
    cout << "Back -> " << d.back() << endl;
    cout << "Empty or not -> " << d.empty() << endl;
    cout << "Before erase : " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase : " << d.size() << endl;
}
