#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums)
{
    map<int, int> m;
    int duplicate =0;
    for(auto i=0; i<nums.size(); i++)
    {
        m[nums[i]]++;
    }
    for(auto i:m)
    {
        if(i.second>1)
        {
            duplicate = i.first;
            break;
        }
    }
    return duplicate;
}

int main()
{
    vector<int> nums={1,3,4,2,2};
    cout<<findDuplicate(nums);
}