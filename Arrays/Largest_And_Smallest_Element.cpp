#include<bits/stdc++.h>
using namespace std;

int Largest_Element(int arr[],int n){
    int max = arr[0];
    for (int i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout << "largest element of the array : "<< max<<endl;
}

int Smallest_Element(int arr[],int n){
    int min = arr[0];
    for (int i=0; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout << "smallest element of the array : "<< min<<endl;
}

int main(){
    int arr1[] = {2, 5, 1, 3, 0};
    int n1 = 5;
    int arr2[] = {8, 10, 5, 7, 9, 4, 11};
    int n2 = 7;
    Largest_Element(arr1,n1);
    Smallest_Element(arr1,n1);
    Largest_Element(arr2,n2);
    Smallest_Element(arr2,n2);
}