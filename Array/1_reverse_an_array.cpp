// Reverse the array
// 1 2 3 4 5 6
// Reversed array is
// 6 5 4 3 2 1

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0; i<n ;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void reverseArray(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp =arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,n);
    reverseArray(arr,0, n-1);

    cout<<"Reversed array is"<<endl;
    printArray(arr, n);
    return 0;
}