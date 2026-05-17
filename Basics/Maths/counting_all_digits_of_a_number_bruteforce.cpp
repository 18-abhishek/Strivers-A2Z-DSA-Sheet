#include<iostream>
using namespace std;
int main(){
int num, count;
cout << "enter a number : ";
cin >> num;
while (num!=0){
    count=num%10;
    cout<< count<<endl;
    num=num/10;
}
}