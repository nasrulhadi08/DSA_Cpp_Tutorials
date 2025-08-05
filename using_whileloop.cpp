#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter any number: " << endl;
    cin>>n;
    int i=1;

    while(i<=n){
        cout << i << " ";
        i = i+1;
    }

                //Another Program for while loop
                
    int k;
    cout << "\n Enter any number of your choice: " << endl;
    cin>>k;
    int y=1;
    int sum=0;

    while(y<=k){
        sum = sum + y;
        y = y + 1;
    }
    cout << "Value of sum is: " << sum << endl;
}