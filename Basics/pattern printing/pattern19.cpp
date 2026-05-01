#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i=1; i<=2*n; i++){
        if (i<=n){
            for (int a=i; a<=n; a++){
                cout<<"*";
            }
            for (int b=2; b<i*2; b++){
                cout<<" ";
            }
            for (int a=i; a<=n; a++){
                cout<<"*";
            }
        }
        else{
            for (int x=1; x<=i-n; x++){
                cout<<"*"; 
            }
            for (int y=1; y<=4*n-2*i; y++){
                cout<<" ";
            }
            for (int x=1; x<=i-n; x++){
                cout<<"*";
        }
        }
        cout<<endl;
    }
}