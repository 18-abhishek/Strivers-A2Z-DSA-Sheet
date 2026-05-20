#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    
    cout << "enter a string : ";
    cin >> a;
    int len = a.length();
    int hash[26]={};
    for (int i=0;i<len;i++){
        hash[a[i]-'a']++;
    }
    for (int j=0;j<26;j++){
        cout << char(j+97)<<"->"<<hash[j]<<endl;
    }
}