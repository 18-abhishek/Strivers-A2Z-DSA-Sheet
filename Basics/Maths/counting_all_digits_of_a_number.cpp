#include<iostream>
using namespace std;
int main(){
int num, count=0;
cout << "enter a number : ";
cin >> num;
while (num!=0){
    count=count+1;
    num=num/10;
}
cout<<count;
}