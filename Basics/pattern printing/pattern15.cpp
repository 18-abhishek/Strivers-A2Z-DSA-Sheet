#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i =0; i<=n-1; i++){
        for (int j=1; j<=n-i; j++){
            cout << (char)(j+64);
        }
        cout<<endl;
    }
}