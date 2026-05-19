#include<bits/stdc++.h>
using namespace std;

void f(int i, int n, string& a){
    if(i>=n){
        cout << "given string is a palindrome";
        return;
    }
    if (a[i]!=a[n]){
        cout << "given string is not a palindrome";
        return;
    }
    f(i+1,n-1,a);
}

int main(){
    int len;
    string word;
    cout <<"enter a word to check palindrome :";
    cin >>word;
    len = word.length()-1;
    f(0,len,word);
}