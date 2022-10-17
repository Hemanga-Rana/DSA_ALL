#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    int pos=0;
    int des=0;
    int jump=0;
    for(int i=0; i<n-1;i++)
    {
        des = max(des,arr[i]+i);
        if(pos==i)
        {
            pos=des;
            jump++;
        }
    }
    if(pos>=n-1)
        return jump;
    return -1;
}

int main()
{
    int arr[]= {1,3,5,8,9,2,6,7,6,8,9};
    int n= sizeof(arr)/sizeof(int);
    cout<<minJumps(arr,n);
}