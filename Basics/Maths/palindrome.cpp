#include<bits/stdc++.h>
using namespace std;
int main() {
    int num,rev_num=0;
    cout << "enter a number : ";
    cin >> num;
    int dublicate_num=num;
    while(num!=0){
        int last_digit = num%10;
        rev_num = (rev_num*10)+last_digit; 
        num = num/10;
    }
    cout << rev_num << endl;
    if(dublicate_num==rev_num){
        cout << dublicate_num<<" is a palindrome ";
    }
    else {
        cout << dublicate_num<<" is not a palindrome ";
    }
}