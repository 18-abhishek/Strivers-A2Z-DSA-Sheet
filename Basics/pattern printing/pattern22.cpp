#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i = 1; i<=2*n-1; i++){
        for (int j = 1; j<=2*n-1; j++){
        int top=i;
        int left=j;
        int bottom=(2*n)-i;
        int right=(2*n)-j;

        int mindist = min({top, left, bottom, right});
        cout << n-mindist+1;
        }
        cout<<endl;
    }
}