// You have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array days. Each day is an integer from 1 to 365.

// Train tickets are sold in three different ways:

// a 1-day pass is sold for costs[0] dollars,
// a 7-day pass is sold for costs[1] dollars, and
// a 30-day pass is sold for costs[2] dollars.
// The passes allow that many days of consecutive travel.

// For example, if we get a 7-day pass on day 2, then we can travel for 7 days: 2, 3, 4, 5, 6, 7, and 8.
// Return the minimum number of dollars you need to travel every day in the given list of days.

 

// Example 1:

// Input: days = [1,4,6,7,8,20], costs = [2,7,15]
// Output: 11
// Explanation: For example, here is one way to buy passes that lets you travel your travel plan:
// On day 1, you bought a 1-day pass for costs[0] = $2, which covered day 1.
// On day 3, you bought a 7-day pass for costs[1] = $7, which covered days 3, 4, ..., 9.
// On day 20, you bought a 1-day pass for costs[0] = $2, which covered day 20.
// In total, you spent $11 and covered all the days of your travel.


#include<bits/stdc++.h>
using namespace std;
int  helper(vector<int> &days, vector<int> &costs, int i){
    if(i>=days.size()){
        return 0;
    }
    //1 day
    int cost1 = costs[0] + helper(days,costs,i+1);
    //7 day
    int passEndDay = days[i]+7-1;
    int j =i;
    while(j< days.size() && days[j] <= passEndDay){
        j++;
    }
    int cost7 = costs[1] + helper(days,costs,j);

    //30 day
     passEndDay = days[i]+30-1;
     j =i;
    while(j< days.size() && days[j] <= passEndDay){
        j++;
    }
    int cost30 = costs[2] + helper(days,costs,j);

    return min(cost1,min(cost7,cost30));

}
int solve(vector<int> &days, vector<int> &costs){
    return helper(days,costs,0);
}
int main(){
    int n;
    cin>>n;
    vector<int> days;
    vector<int>costs;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        days.push_back(in);
    }
    for(int i=0;i<3;i++){
        int in;
        cin>>in;
        costs.push_back(in);
    }
    int ans = solve(days,costs);
    cout<<ans;

}