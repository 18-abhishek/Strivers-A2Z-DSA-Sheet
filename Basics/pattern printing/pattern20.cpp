#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i = 1; i<=2*n; i++){
        if (i<=n){
            for (int a=1; a<=i; a++){
                cout<<"*";
            }
            for (int b=1; b<=2*(n-i); b++){
                cout<<" ";
            }
            for (int a=1; a<=i; a++){
                cout<<"*";    
            }
        }
        else{
            for (int e=1; e<=2*n-i; e++){
                cout<<"*";
            }
            for (int f=1; f<=2*(i-n); f++){
                cout<<" ";
            }
            for (int e=1; e<=2*n-i; e++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}