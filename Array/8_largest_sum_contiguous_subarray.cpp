#include <bits/stdc++.h>
using namespace std;
/*
    max_end = first element of array
    if max is less the max_end then maxi = max_end  and start= s, end = i
    if max_end is less then 0  then max_end = 0, s=i+1;
    return maxi;
*/
int maxSubarraySum(int arr[], int n)
{
    int maxi=INT_MIN, max_end=0, start=0, end=0, s=0;

    for(int i=0; i<n; i++)
    {
        max_end += arr[i];
        if(maxi < max_end)
        {
            maxi = max_end;
            start = s;
            end = i;
        }
        if(max_end<0)
        {
            max_end = 0;
            s = i+1;
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {1,2,3,-2,5};
    int n = sizeof(arr)/ sizeof(int);
    cout<<maxSubarraySum(arr, n);
}