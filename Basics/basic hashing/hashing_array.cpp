#include<bits/stdc++.h>
using namespace std;
int main(){
    int s_array[] = {1,2,1,3,2,2};
    int hash[6]={};
    for (int i=0;i<6;i++){
        hash[s_array[i]]++;
    }
    for(int i=0; i<6; i++){
        cout << i << " -> " << hash[i] << endl;
    }
}