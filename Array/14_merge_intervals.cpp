/*
Merge Intervals*************


Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
*/

#include<bits/stdc++.h>
using namespace std;

//*****************************************************
//******************* Merge Sort **********************
// Leetcode Solution
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> v;
    
    int start = intervals[0][0];
    int end = intervals[0][1];
    
    for(int i=1; i<intervals.size();i++)
    {
        if(intervals[i][0]<=end)
        {
            end= max(end,intervals[i][1]);
        }
        else
        {
            v.push_back({start,end});
            start= intervals[i][0];
            end = intervals[i][1];
        }
    }
    v.push_back({start,end});
    return v;
}
//***********************************************


// Easy Method ******************
// https://www.youtube.com/watch?v=g1zOrfmNzvk

vector<vector<int>> merge(vector<vector<int>> & intervals)
{
    sort(intervals.begin(), intervals.end());

    int n = intervals.size();
    vector<vector<int>> ans;

    for(int i=0; i<n; i++)
    {
        if(ans.empty())
        {
            ans.push_back(intervals[i]);
        }
        else{
            vector<int> &v = ans.back();
            int y = v[1]; //end time of previous interval
            // compare 'y' with i's start time

            if(intervals[i][0]<=y)
            {
                v[1] = max(y, intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
    }
    return ans;
}
