#include<bits/stdc++.h>
using namespace std;

void left_rotate(vector<int>& arr){
int n = arr.size();
    for (int i=1;i<=n-1;i++){
        swap(arr[i-1],arr[i]);
    }
    for(int j=0;j<=n-1;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    vector<int> arr1 ={1,2,3,4,5};
    left_rotate(arr1);
}