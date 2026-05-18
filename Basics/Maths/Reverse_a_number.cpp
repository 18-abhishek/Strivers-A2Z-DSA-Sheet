#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,rev_num=0;
    cout<<"enter a number : ";
    cin>>num;
    while (num>0){
        int last_digit = num%10;
        rev_num = (rev_num*10)+last_digit;
        num=num/10;
    }
    cout<<rev_num;
}