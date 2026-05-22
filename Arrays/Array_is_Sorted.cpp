#include<bits/stdc++.h>
using namespace std;

void Array_is_Sorted(int arr[],int n){
    bool sorted = true;
    for (int i=1;i<n;i++){
        if (arr[i-1]>arr[i]){
            sorted=false;
        }
    }
    if(sorted==true){
        cout<<"the array is sorted"<<endl;
    }
    else{
        cout<<"the array is not sorted"<<endl;
    }
}

int main(){
    int arr1[]={1,3,2,3,4,5};
    int n1=6;
    int arr2[]={1,2,3,4,5};
    int n2=5;
    Array_is_Sorted(arr1,n1);
    Array_is_Sorted(arr2,n2);
}