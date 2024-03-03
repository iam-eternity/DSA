#include <iostream>
using namespace std;
void sayHello()
{
    cout << "Hello" << endl;
}
void printName(string name) {
    cout<<name<<endl;
}
// int sum(int num1,int  num2) {
//     return num1 + num2;
// }
// int max(int num1,int num2) {
//     int max;
//     if (num1 >= num2) {
//         max= num1;
//     } else {
//         max = num2;
//     }
//     return max;
// }
void doSomething(int num) { // PASS BY VALUE
    cout<<num<<endl;
    num += 10;
    cout<<num<<endl;
}
void doSomething2(int &num) { // PASS BY REFERNCE
    cout<<num<<endl;
    num += 10;
    cout<<num<<endl;
}
int main()
{
    // cout << "Aakash"<<endl;
    // int x,y;
    // cin >> x >> y;
    // cout<<"Value of x : "<< x << " and y: "<<y;
    /* Take the day no and print the corresponding day
    for 1 print Monday for 2 tuesday
    */
    // int x;
    // cout << "Enter the number: ";
    // cin >> x;
    // switch (x)
    // {
    // case 1:
    //     cout << "Monday" << endl;
    //     break;
    // case 2:
    //     cout << "Tuesday" << endl;
    //     break;
    // case 3:
    //     cout << "Wednesday" << endl;
    //     break;
    // case 4:
    //     cout << "Thrusday" << endl;
    //     break;
    // case 5:
    //     cout << "Friday" << endl;
    //     break;
    // case 6:
    //     cout << "Saturday" << endl;
    //     break;
    // case 7:
    //     cout << "Sunday" << endl;
    //     break;

    // default: cout << "Enter a valid number!"<<endl;
    //     break;
    // }
    // Arrays
    // array memeber is stored in consecutive memory location but not sure where the first elemnet
    // int a, b, c, d;
    // int arr[5]; // similiar data type
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[2]>>arr[3]>>arr[4];
    // arr[3] += 10;
    // cout<<arr[3];

    // 2D Array
    // int arr[3][4];
    // arr[1][3] = 142;
    // cout<< arr[1][3]<<endl;
    // cout<< arr[1][4];  // garbage value as it is not defined

    // String
    // string s = "Aakash";
    // // int len = s.length();
    // int len = s.size();
    // s[len-1] = 'i';
    // cout<<len<<endl;
    // cout<<s<<endl;

    // for(int i = 0; i < 5; i++) {
    //     cout<<"Lucifer MorningStar"<<endl;
    // }

    // int i = 5;
    // while(i < 10) {
    //     cout<<"Aakash"<<endl;
    //     i += 1;
    // }

    // functions
    // Functionjs are set of code that perform something for you
    // Functions are used to modularize code
    // used to increase readability

    // void  -> dosen't return anything
    // return
    // parameterized
    // non-parameterized

    // sayHello();
    // printName("Aakash");
    // string name;
    // cin>>name;
    // printName(name);
    // Take two numbers and print it's sum

    // cout<<"The sum is: "<<sum(2,4)<<endl;
    // cout<<"Max is : "<<max(2,4)<<endl;
    // Pass by Value
    // int num = 10;
    // doSomething(num);
    // doSomething2(num);
    // cout<<num<<endl;
    int arra[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin >> arra[i];
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << arra[i];
    }
    return 0;
}
