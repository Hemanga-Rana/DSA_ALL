/*
Example 1:

Input:
5
4 2 -3 1 6

Output: 
Yes

Explanation: 
2, -3, 1 is the subarray 
with sum 0.
Example 2:

Input:
5
4 2 0 1 6

Output: 
Yes

Explanation: 
0 is one of the element 
in the array so there exist a 
subarray with sum 0.

https://www.youtube.com/watch?v=8inhayLCCHs
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool subArrayExist(int arr[], int n)
    {
        unordered_set<int> s;
        int pre_sum =0;
        for(int i=0; i<n; i++)
        {
            pre_sum+= arr[i];

            if(pre_sum==0)
                return true;
            if(s.find(pre_sum)!=s.end())
                return true;

            s.insert(pre_sum);
        }
        return false;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+10];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        if(obj.subArrayExist(arr,n))
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
    }
    return 0;
}








//***********************************************


/*
GFG Solution:

//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> s;
        
        int pre_sum=0;
        for(int i=0;i<n;i++)
        {
            pre_sum += arr[i];
            
            if(pre_sum==0)
                return true;
            if(s.find(pre_sum)!=s.end())
                return true;
                
            s.insert(pre_sum);
        }
        return false;
        
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends
*/