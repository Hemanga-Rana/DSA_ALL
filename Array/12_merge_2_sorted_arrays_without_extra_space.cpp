/*
Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8} 
Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}

Input: arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8} 
Output: arr3[] = {4, 5, 7, 8, 8, 9} 
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1,3,4,5};
    int m = sizeof(arr1)/sizeof(int);
    int arr2[] = {2,4,6,8};
    int n = sizeof(arr2)/sizeof(int);

    int arr3[100];
    int k=0;
    for(int i=0; i<m;i++)
    {
        arr3[k]= arr1[i];
        k++;
    }
    for(int i=0; i<n;i++)
    {
        arr3[k]= arr2[i];
        k++;
    }
    int v= n+m;
    sort(arr3,arr3+v);
    for(int i=0; i<v;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}