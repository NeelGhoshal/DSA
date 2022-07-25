#include <iostream>
#include<cmath>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main() {

    //printingprimenumbers between a and b
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(isPrime(i)==true){
           cout<<i<<endl; 
        }
    }

}

