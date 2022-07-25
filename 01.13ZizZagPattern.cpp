#include<iostream>
using namespace std;
int main() {

//   *   *   *   *
//  * * * * * * *
// *   *   *   *
    int n;
    cin>>n;

    //logic: after mapping on cartesioan plane, it's found that if the number addition of the coordiantes add up to be divisible by 4, then a star is there
    //for some which are stars but whose coordinates aren't divisible by 4, we aim to check other logic

    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%4==0 || (i==2 && j%4==0)){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}