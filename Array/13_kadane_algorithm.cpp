/*
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9

Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
*/

//***************************************************
// Easy way to understand (Apna College)
/*
Approch
1)Curr=0, max_till_now=0
2) for(i=0 to i=n-1)
{
    curr+= arr[i];
    max_till_now= max(max_till_now, curr);
    if(curr<0)
        curr=0;
}
return = max_till_now;
*/
#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum1(int arr[], int n)
{
    int curr =0, max_till_now=0;
    
    for(int i=0; i<n; i++)
    {
        curr+=arr[i];
        max_till_now = max(max_till_now,curr);
        
        if(curr<0)
            curr=0;
    }
    return max_till_now;
}

// Hard Way to understand

// int maxSubarraySum(int arr[], int n)
// {
//     int maxi=INT_MIN, max_end=0, start=0, end=0, s=0;

//     for(int i=0;i<n; i++)
//     {
//         max_end+=arr[i];
//         if(maxi<max_end)
//         {
//             maxi=max_end;
//             start=s;
//             end=i;
//         }
//         if(max_end<0)
//         {
//             max_end=0;
//             s=i+1;
//         }
//     }
//     return maxi;
// }
int main()
{
    int arr[]= {1,2,3,-2,5};
    int n= sizeof(arr)/sizeof(int);
    // cout<<maxSubarraySum(arr,n);
    cout<<maxSubarraySum1(arr,n);
}