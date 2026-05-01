#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i = 1; i<=n; i++){
        if(i==1 or i==n){
            for (int j=1; j<=n; j++){
                cout<<"*";
            }
        }
        else{
            for (int k=1; k<=1; k++){
                cout<<"*";
            }
            for (int j=1; j<=n-2; j++){
                cout<<" ";
            }
            for (int k=1; k<=1; k++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}