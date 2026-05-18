#include<bits/stdc++.h>
using namespace std;

void f(int n){
    if(n<1){
        return;
    }
    cout <<n<<" ";
    f(n-1);
}

int main(){
    int num;
    cout <<"enter a number : ";
    cin>>num;
    f(num);
}