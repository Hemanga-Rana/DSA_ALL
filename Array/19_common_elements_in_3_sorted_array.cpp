/*
Example 1:

Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only
common elements in A, B and C.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> commonElements(int a[], int b[], int c[], int n1, int n2, int n3)
    {
        int i=0, j=0, k=0;
        vector<int> v;
        while(i<n1 and j<n2 and k<n3)
        {
            if(a[i]==b[j] and b[j]==c[k])
            {
                v.push_back(a[i]);
                i++;
                j++;
                k++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else if(b[j]<c[k]) j++;
            else k++;
            int xx = a[i-1];
            while(a[i]==xx) i++;
            int yy = b[j-1];
            while(b[j]==yy)j++;
            int zz = c[k-1];
            while(c[k]==zz) k++;
        }
        if(v.size()==0) return {-1};
        return v;
    }
};

int main()
{
    int n1 = 6;
    int a[] = {1, 5, 10, 20, 40, 80};
    int n2 = 5;
    int b[] = {6, 7, 20, 80, 100};
    int n3 = 8;
    int c[] = {3, 4, 15, 20, 30, 70, 80, 120};

    Solution ob;
    vector<int> res = ob.commonElements(a,b,c,n1,n2,n3);
    if(res.size() == 0)
    {
        cout<<-1;
    }
    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}