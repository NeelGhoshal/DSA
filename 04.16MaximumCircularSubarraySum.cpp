//Max subarray of all circular subarrays
//Max Subarray sum = Total sum of array - Sum of non-contributing elements
//Find max non-contributing elements by interchanging the sign of all integers and finding max of them

#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum<0){
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr,n); //max sum found(in case of a non circular subarray system)

    int totalsum=0;

    for(int i=0; i<n; i++){
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totalsum + kadane(arr, n);

    cout<<max(wrapsum, nonwrapsum)<<endl;

    return 0;

}
