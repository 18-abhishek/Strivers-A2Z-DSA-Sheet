#include<bits/stdc++.h>
using namespace std;

void rotate_by_k(vector<int>&arr,int k,string dir){
    int n = arr.size();
    if (dir == "left" ){
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin()+k, arr.end());
        reverse(arr.begin(), arr.end());
    }
    for(int j=0;j<=n-1;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    vector<int> arr1 ={1,2,3,4,5};
    int rotate = 3;
    string dir = "left";
    rotate_by_k(arr1,rotate,dir);
}