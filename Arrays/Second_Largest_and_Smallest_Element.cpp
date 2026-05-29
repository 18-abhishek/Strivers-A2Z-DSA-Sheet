#include <bits/stdc++.h>
using namespace std;

void Second_Smallest_Element(int arr[],int n){
    int small, s_small;
    small=s_small=INT_MAX;
    for(int i=0; i<n;i++){
        if(arr[i]<small){
            s_small=small;
            small=arr[i];
        }
        else if (arr[i]>small && s_small>arr[i]){
            s_small=arr[i];
        }
    }
    cout<<"smallest element : "<< small <<endl;
    cout<<"second smallest element : "<< s_small <<endl;
}

void Second_largest_Element(int arr[],int n){
    int max, s_max;
    max=s_max=INT_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]>max){
            s_max=max;
            max=arr[i];
        }
        else if (arr[i]<max && s_max<arr[i] ){
            s_max=arr[i];
        }
    }
    cout<<"largest element : "<< max <<endl;
    cout<<"second largest element : "<< s_max <<endl;
}

int main (){
    int arr1[] = {1,2,2,3};
    int n1 = 4;
    Second_Smallest_Element(arr1,n1);
    Second_largest_Element(arr1,n1);
    return 0;
}