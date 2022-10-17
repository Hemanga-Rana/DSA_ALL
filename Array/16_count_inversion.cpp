/*
Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).
Example 2:

Input: N = 5
arr[] = {2, 3, 4, 5, 6}
Output: 0
Explanation: As the sequence is already 
sorted so there is no inversion count.
*/


#include<bits/stdc++.h>
using namespace std;

long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int count =0;
        for(long long int i=0; i<N; i++)
        {
            long long a = i+1;
            while(a<N)
            {
                if(arr[i]>arr[a])
                {
                    swap(arr[i],arr[a]);
                    a=i+1;
                    count++;
                }
                else
                {
                    a++;
                }
            }
        }
        return count;
    }


int main()
{
    long long arr[]= {2,4,1,3,5};
    long long N = 5;
    // long long arr1[] = {2, 3, 4, 5, 6};
    cout<< inversionCount(arr, N);
    // cout<< inversionCount(arr1, N);
}

