#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    bool prime = true;
    cout <<"enter a number : ";
    cin>>num;
    if(num<=1){
        cout<<num<<" is not a prime number";
    }
    else{
            for (int i =2;i*i<=num;i++){
                if(num%i==0){
                    prime=false;
                    break;   
                }
        }
        if(prime==true){
            cout<<num<<" is a prime number";
        }
        else{
            cout<<num<<" is not a prime number";
        }
    }
}