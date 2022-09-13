/* Find the "Kth" max and min element of an array. O(nlogn)
N=6
arr[] = 7 10 4 3 20 15
K=3;
Output: 7
*/
#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    sort(arr, arr+r+1);
    return arr[k-1];
}

int main()
{
    int arr[]={2,7,5,3,6};
    int size = sizeof(arr)/sizeof(int);
    int l=0;
    int r=size-1;
    int k =3;
    cout<<kthSmallest(arr,l,r,k)<<endl;
}



