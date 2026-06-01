#include <bits/stdc++.h>
using namespace std;

void remove_duplicate(vector<int>& arr){
    int n = arr.size();
    for(int i=1;i<=n;i++){
        if (arr[i-1]<arr[i]){
          cout << arr[i-1]<<" ";
        }
    }

}
int main(){
    vector<int> arr1 ={0,0,1,1,1,2,2,3,3,4};
    remove_duplicate(arr1);
}