#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "enter a number : ";
    cin >> x;
    for (int i = 0; i <= x-1; i++){
        for (int j = 1; j <= x-1-i; j++){
            cout<<" ";
        }
        for (int k = 1; k <= 2*i+1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int l = 1; l<=x; l++){
        for (int m = 2; m<=l; m++){
            cout <<" ";
        }
        for(int n = 1; n<=2*(x-l)+1; n++){
            cout <<"*";
        }
        cout <<endl;
    }
}
