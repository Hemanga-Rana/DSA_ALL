#include <bits/stdc++.h>
using namespace std;

// STL
void nextPermutation(vector<int> &nums)
{
    next_permutation(nums.begin(), nums.end());
}

// NON STL
void nextPermutation2(vector<int>& nums) {
        vector<int> v;
        int count=0;
        do{
            for(int i=0;i<nums.size();i++){
                if(count==0)
                    break;
                else
                    v.push_back(nums[i]);
            }
            count++;
        }while(next_permutation(nums.begin(),nums.end()) && count<2);  //getting the next permutation
        
        if(v.size()==0)
            sort(nums.begin(),nums.end());
        else{
            nums.clear();
            nums=v;
        }
      
}


int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int k;
    cin>>k;
    v.push_back(k);
    }
    nextPermutation(v);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}