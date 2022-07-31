/*Isyana is given the number of visitors at her local theme park on N consecutive days. The 
nuber of visitors on the ith day is V. A day is record breaking if it satisfies both of the following conditions:
a.The number of visiotrs on the day is strictly larger than the number of visitors on each of the 
previous days
Either it tis the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day
Note that the very first day could be a record breaking day!
Help Isyana find out the number of record breaking days.
Input:
The first line gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N.
The second line contains N integers. The i-th integer is V.
Output:
For each test case, output one line containing Case #x:y, where x is the test case number(starting from 1) and y is the number of record 
breaking days
*/

//brute force
/* Iterate over all elements and check if it is record breaking day or not
Note. To check if a[i] is a record breaking day, we have to iterate over a[0], a[1],...a[i-1]
    Time Complexity for the operation: O[n]
    Overall Time Complexity: O[n^2]
*/

//optimized
/*
intead of checking for comparison of every element before the current iteration's element, keep a variable mx, which will
store the max value till a[i]. Then check if a[i]>mx
and do further operations

Overall Time Complexity here : O(n)
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[n+1];
    a[n] = -1;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for(int i=0; i<n; i++){
        if(a[i]>mx && a[i]>a[i+1] ){
         ans++;   
        }
        mx = max(mx, a[i]);
    }
    cout<< ans <<endl;
    return 0;
}