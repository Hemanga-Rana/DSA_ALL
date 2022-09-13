/* Move all negative numbers to beginning and positive to end with constant extra space

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/ sizeof(int);
    int temp[100];
    int k=0;
    for(int i=0; i<n;i++)
    {
        if(arr[i]<0)
        {
            temp[k]=arr[i];
            k++;
        }
    }
    for(int i=0; i<n;i++)
    {
        if(arr[i]>=0)
        {
            temp[k]=arr[i];
            k++;
        }
    }
    for(int i=0; i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}




//********************************************
// GFG Approch O(n)
// But it prints the positive value in sorted order 

void rearrange(int arr[], int n)
{
    int j=0;
    for(int i=0; i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(int);
    rearrange(arr,n);
    printArray(arr,n);
    return 0;
}