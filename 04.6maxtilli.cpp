//given an array, find the maximum of all subarrays from 0th, 0th and 1st, 0th 1st and 2nd and so on
#include<iostream>
using namespace std;

int main() {
    int mx = -199999;
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        mx=max(mx, a[i]);
        cout<<mx<<endl;
    }
    
}