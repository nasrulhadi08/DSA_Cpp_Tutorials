#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;     // cin is used to take input from user
    // cout << "Value of n is: " << n << endl;
    if (a > 0){
        cout << "A is Positive" << endl;
    } 
    else {
        cout << "A is Negative" << endl;
    }
            // To which is greater
    int b,c;
    cout << "Enter value of b:" << endl;
    cin>>b;
    cout << "Enter value of c:" << endl;
    cin>>c;

    if (b>c){
        cout << "B is greater" << endl;
    } 
    if (c>b) {
        cout << "C is greater" << endl;
    }
}