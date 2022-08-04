//Finding the subarray in an array which has the maximum sum
#include<iostream>
#include<climits>
using namespace std;

//Brute Force

// int main() {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     int maxSum = INT_MIN;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 sum+=a[k];
//                 // cout<<a[k]<<" ";
//             }
//             // cout<<endl;
//             maxSum = max(maxSum, sum);
//         }
//     }

//     cout<<maxSum<<endl;

//     return 0;
// }

//CumulativeSumApproach

int main() {

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int currsum[n+1];
    currsum[0] = 0;

    for(int i=1; i<=n; i++){
        currsum[i] = currsum[i-1] + a[i-1]; //currsum is sum of all elements till ith elements i.e. sum of all before ith element

    }

    int maxSum = INT_MIN;
    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=0; j<i; j++){
            sum = currsum[i] - currsum[j]; //subtracting the sums of bigger array vs the smaller subpart of the same array, resulting in the difference's array's sum
            maxSum = max(sum, maxSum);
        }
    }

    cout<<maxSum<<endl;
    return 0;
}