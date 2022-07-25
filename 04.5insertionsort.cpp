#include<iostream>
using namespace std;

int main() {
    //consider a sorted array in which we insert elements iteratively from unsorted array

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){ //considering the first element to be a sorted array and the remainig elements as unsorted array
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j]; //1 upping the position of any element greater than current
            j--;
        }
        arr[j+1]=current;
    }

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}