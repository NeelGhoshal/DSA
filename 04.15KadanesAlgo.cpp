//Maximum Subarray Sum question, further optimized
//Basically, if currsum becomes negative, then it wont further the solution of finding a max subarray, so we update that part anc make it 0 and ignore that part and proceed from next element
//O(n) Time
#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum = max(maxSum, currSum);
    }
    cout<< maxSum << endl;


    return 0;
}

