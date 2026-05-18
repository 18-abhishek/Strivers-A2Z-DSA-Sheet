#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, armstrong=0, count=0;
    cout<< "enter a number : ";
    cin>>num;
    int dublicate_num = num;
    while(num>0){
        num = num/10;
        count = count + 1;
    }
    num=dublicate_num;
    while(num>0){
        int last_digit = num%10;
        armstrong = armstrong + pow(last_digit,count);
        num = num/10;
    }
    if (dublicate_num==armstrong){
        cout<<dublicate_num<<" is an armstrong number";
    }
    else {
        cout<<dublicate_num<<" is not an armstrong number";
    }
}