#include<iostream>
using namespace std;
int main() {

    
//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n-i;j++){
            cout<<"  ";
        }
        int k=i;
        for(;j<n;j++){
           cout<<k--<<" "; 
        }
        k=2;
        for(;j<n+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}