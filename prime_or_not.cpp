#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;

    int i = 2;
    while(i<n){
        // If it gives a remainder of 0, then it is not prime
        if(n%i==0){
            cout << "Not prime for " << i << endl;
        }
        else{
            cout << "Prime for " << i << endl;
        }
        i=i+1;
    }
}