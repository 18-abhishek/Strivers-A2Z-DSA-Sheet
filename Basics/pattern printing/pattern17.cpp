#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for (int k=1; k<=i; k++){
            cout<<(char)(k+64);
        }
        for (int l=i; l>1; l--){
            cout<<(char)(l+63);
        }
        cout<<endl;
    }
}