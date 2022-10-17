/*
Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

*/


#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int max_profit = 0;
    int buy = INT_MAX;
    for(int i=0; i<prices.size(); i++)
    {
        if(prices[i] < buy)
            buy = prices[i];
        int current_profit = prices[i] - buy;
        if(current_profit > max_profit)
            max_profit = current_profit;
    }
    return max_profit;
}

int main()
{
    vector<int> v= {7,1,5,3,6,4};
    cout<<maxProfit(v);
}