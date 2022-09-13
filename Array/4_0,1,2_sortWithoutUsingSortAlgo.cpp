/* Given an array which consists of only 0,1 and 2. Sort the array without using any sorting algo.

if sample input is: 0 1 0 0 2 1
0 1 0 0 2 1
0 0 1 0 2 1
0 0 0 1 2 1
0 0 0 1 1 2
Output: 0 0 0 1 1 2
*/

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n )
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
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