/*
Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.

Example 2:

Input:
N = 4, K = 2
arr[] = {1, 1, 1, 1}
Output: 6
Explanation: 
Each 1 will produce sum 2 with any 1.
*/

#include <bits/stdc++.h>
using namespace std;

// It's take less Time Complexity
int getPairsCount(int arr[], int n, int k)
{
    unordered_map<int, int> st;
    int count =0;
    for(int i =0; i<n; i++)
    {
        if(st.count(k-arr[i])>0)
            count+=st[k-arr[i]];
        st[arr[i]]++;

    }
    return count;
}

// Its take Time Complexity of O(n^2)
int getPairsCount2(int arr[], int n, int k) {
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[] = {1,5,7,1};
    int n =4;
    int k =6;
    cout<<getPairsCount(arr, n,k);
    cout<<getPairsCount2(arr, n,k);

}