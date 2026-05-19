#include<bits/stdc++.h>
using namespace std;

void f(int i, int n, vector <int>& v){
    if(i>=n){
        for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
        }
        return;
    }
    swap(v[i],v[n]);
    f(i+1,n-1,v);
}

int main(){
    vector <int> v={1,2,3,4,5};
    int n =v.size();
    f(0,n-1,v);
}