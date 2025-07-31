#include<iostream>
using namespace std;    
int main(){
    int a;
    cout << "Enter the valye of a: " << endl;
    cin >> a;
/*
    if (a>0){
        cout << "A is Positive";
    }
    else{
        if(a<0){
            cout << "A is Negative";
        }
        else{
            cout << "A is Zero";
        }
    }
*/
        // Another way to write the above code
    if (a>0){
        cout << "A is Positive" << endl;
    } 
    else if (a<0){
        cout << "A is Negative" << endl;
    }
    else {
        cout << "A is Zero" << endl;
    }
}