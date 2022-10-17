/* Find the maximum and minimum element in an array  O(n)

Input: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
        Maximum element is: 9
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i =0; i<n;i++)
    {
        cin>>a[i];
    }
    int max,min;
    if(n==1)
    {
        max = a[0];
        min = a[0];
    }
    else{
        if(a[0]>a[1])
        {
            max = a[0];
            min = a[1];
        }
        else{
            max = a[1];
            min = a[0];
        }
        for(int i=2; i<n; i++)
        {
            if(a[i]>max)
            {
                max = a[i];
            }
            if(a[i] < max)
            {
                min = a[i];
            }
        }
    }
    cout<<"Maximum value "<<max<<endl;
    cout<<"Minimum value "<<min;

    // Second Approch O(nlogn)
    // int arr[]= {2,4,1,9,5};
    // int size = sizeof(arr)/sizeof(int);
    // sort(arr, arr+size);
    // cout<<"min: "<<arr[0]<<endl;
    // cout<<"max: "<<arr[size-1]<<endl;


    return 0;
}