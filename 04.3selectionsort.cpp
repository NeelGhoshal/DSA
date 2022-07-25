#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){ //in each iteration, swapping the first element with the minimum element in the remaining array
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}