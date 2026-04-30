#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    for(int i = 1; i<=n; i++){
        for (int j = 2; j<=i; j++){
            cout <<" ";
        }
        for(int k = 1; k<=2*(n-i)+1; k++){
            cout <<"*";
        }
        cout <<endl;
    }
}