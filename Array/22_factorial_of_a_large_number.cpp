/*
Example 1:

Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120
Example 2:

Input: N = 10
Output: 3628800
Explanation :
10! = 1*2*3*4*5*6*7*8*9*10 = 3628800

//************* GFG Coding Solution****************
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int factorial(int N)
    {
        vector<int> ans;
        ans.push_back(N);
        for(int i=N-1; i>=2;i--)
        {
            int carry = 0;
            for(int j=ans.size()-1; j>=0;j--)
            {
                ans[j]=ans[j]*i+carry;
                carry=ans[j]/10;
                ans[j]=ans[j]%10;
            }
            while(carry>0)
            {
                ans.insert(ans.begin(), carry%10);
                carry/=10;
            }
        }
        return ans;
    }
};

int main()
{
    int N;
    cin>>N;
    Solution ob;
    vector<int> result=  ob.factorial(N);
    for(int i=0; i<result.size(); i++)
    {
        cout<<result[i];
    }
    cout<<endl;
}
*/

//*********************************************************************
// GFG Solution:
#include <bits/stdc++.h>
using namespace std;

#define MAX 500
int multiply(int x, int res[], int res_size);

void factorial(int n)
{
    int res[MAX];
    res[0] = 1;
    int res_size = 1;

    for(int x = 2; x<=n; x++)
        res_size= multiply(x,res,res_size);

    cout<<"Factorial of the given no.:\n";
    for(int i= res_size-1; i>=0; i--)
        cout<<res[i];
}

int multiply(int x, int res[], int res_size)
{
    int carry=0;
    for(int i=0; i<res_size; i++)
    {
        int prod = res[i]*x+carry;
        res[i] = prod % 10;
        carry = prod / 10;
    } 
    while(carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

int main()
{
    factorial(100);
    return 0;
}

//**************************************************************************
// Not work in every Condition
// Short Answer ***************
/*
#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull factorial(int N)
{
    ull f= 1;
    for(ull i =2; i<=N; i++)
        f*=i;

    return f;
}
int main()
{
    int N;
    cin>>N;
    cout<<factorial(N)<<endl;
}
*/