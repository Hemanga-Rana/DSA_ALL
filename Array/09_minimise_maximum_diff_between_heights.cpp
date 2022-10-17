
/*
    Input:
    K = 3, N = 5
    Arr[] = {3, 9, 12, 16, 20}
    Output:
    11
    Explanation:
    The array can be modified as
    {6, 12, 9, 13, 17}. The difference between 
    the largest and the smallest is 17-6 = 11. 
*/

/*
First sort the values 
then store the (last-first) value into the ans.
the store the min value in ans which is following.

*/

#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr+n);
    int ans = arr[n-1]-arr[0];
    for(int i=0; i<n-1; i++)
        if(arr[i+1]>=k)
            ans = min(ans,max(arr[i]+k, arr[n-1]-k)-min(arr[0]+k, arr[i+1]-k));
    
    return ans;
}

int main()
{
    int arr[]={3,9,12,16,20};
    int k=3;
    int n=sizeof(arr)/sizeof(int);
    cout<<getMinDiff(arr,n,k);
}