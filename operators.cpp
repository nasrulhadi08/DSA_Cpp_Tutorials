#include<iostream>
using namespace std;
int main (){
    /*
    int a = 2/5;
    cout << a << endl;

    float f = 2.0/5;
    cout << f << endl;

    double d = 2.0/5;
    cout << d << endl;
    */

    int a = 2;
    int b = 3;

    bool first = (a==b);
    cout << first << endl;

    bool second = (a>b);
    cout << second << endl;

    bool third = (a<b);         
    cout << third << endl;

    bool fourth = (a>=b);
    cout << fourth << endl;

    bool fifth = (a<=b);
    cout << fifth << endl;  

    bool sixth = (a!=b);
    cout << sixth << endl;

                        // Logical Operators
    int i = 21; // ! is used to print the opposite value
    cout << !i << endl;

    int j = 0;
    cout << !j << endl;
}