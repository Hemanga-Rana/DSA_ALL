// Find the "Kth" max and min element of an array. O(nlogn)
// N=6
// arr[] = 7 10 4 3 20 15
// K=3;
// Output: 7


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

// ************************************
// Best Approch O(n)

void printArray(int arr[], int n )
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort012(int a[], int size)
{
    int low =0;
    int high = size-1;
    int mid =0;

    while(mid<=high)
    {
        switch(a[mid])
        {
            case 0:
                swap(a[low++], a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid], a[high--]);
                break;
        }
    }
}

int main()
{
    int arr[] = {0,1,1,0,1,2,1,2,0,0,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr,n);
    printArray(arr,n);

    return 0;
}