/*You are given an array arr[] of N integers including 0.
The task is to find the smallest positive number missing from
the array*/
//Example : 0 -9 1 3 -4 5  , Here first positive missing number is 2
//Base idea: Build a boolean check[] array that will depict if any element x is present in the array or not
//Iterate over the array and mark non negative a[i] as True
//Now, after this, we iterate over check[] to find the index of 1st positve value missing(i.e. marked as false)

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N = 1e6 + 2;
    bool check[N];
    for(int i=0; i<N; i++){
        check[i] = false;
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] >= 0)
        {
            check[a[i]] = true;
        }
    }
    int ans = -1;

    for(int i=1; i<N; i++){
        if(check[i] == false)
        {
            ans=i;
            break;
        }
    }

    cout << ans << endl;


    return 0;
}
