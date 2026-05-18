#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    int gcd=1;
    cout<<"enter number 1 : ";
    cin>>n1;
    cout<<"enter number 2 : ";
    cin>>n2;
    while(n1>0 && n2>0){
      if(n1>n2){
        n1=n1%n2;
      }
      else{
        n2=n2%n1;
      }
    }
    if(n1==0){
        cout<<"GCD : "<<n2;
    }
    else{
        cout<<"GCD : "<<n1;
    }
}