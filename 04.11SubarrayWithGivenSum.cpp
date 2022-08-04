/*Given an unsorted array A of size N of non-negative integers, find a
continuous subarray which adds to a given number S*/

//Brute force: Find sum of all possible subarrays. If any of the sum equates to S,
//Output the starting and ending index of the subarray.
//Time Complexity: O(n^2)

//Optimized Approach: Keep 2 pointers st and en, and a variable currSum sum from st to en.
//Increment en, till, currSum + a[en]>S
//Start increasing st till currSum<=S
//Time Complexity: O(n^2)

#include<iostream>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0,st=-1,en=-1,sum=0;

    while(j<n && sum+a[j]<=s)
    {
        sum += a[j];
        j++;
    }

    if(sum == s)
    {
        cout << i+1 <<" " << j << endl;
        return 0;
    }

    while(j<n)
    {
        sum += a[j];
        while(sum > s)
        {
            sum -= a[i];
            i++;
        }
        if(sum == s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }

    cout << st << " " << en << endl;

}
