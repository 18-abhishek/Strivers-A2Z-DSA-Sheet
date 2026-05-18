#include<bits/stdc++.h>
using namespace std;

void f(int i, int n, long long fact){
    if (i>n){
        cout <<"factorial of "<<n<<" is : "<<fact;
        return;
    }
    fact = fact*i;
    f(i+1,n,fact);
}

int main(){
    int num;
    cout <<"enter a number : ";
    cin >>num;
    f(1,num,1);
}