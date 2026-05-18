#include<bits/stdc++.h>
using namespace std;
int main(){
 int num;
 cout <<"enter a number : ";
 cin>>num;
 for(int i=1;i*i<=num;i++){
    if (num%i==0){
     int div=num/i;
        if (div!=i){
            cout <<i<<" "<<div<<" ";
        }
        else{
            cout <<i<<" ";
        }
     
    }
 }
}