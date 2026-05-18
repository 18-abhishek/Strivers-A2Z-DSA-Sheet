#include<bits/stdc++.h>
using namespace std;


void f(int i, int n, long sum){
    if(i>n){
        cout << "sum of "<<n<<" is : "<< sum;
        return;
    }
    sum = i+sum;
    f(i+1,n,sum);
}

int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;
    f(1,num,0);
}