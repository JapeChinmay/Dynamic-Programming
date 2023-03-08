#include <bits/stdc++.h> 
#include<vector>

int solve(int ind, vector<int>&heights, vector<int>&dp) {
       if(ind == 0) return 0;
 
        if(dp[ind] != -1) return dp[ind];
        

       int left =  solve(ind-1, heights) + abs(heights[ind]- heights[ind-1]);
       int right = INT_MAX;
       if(ind > 1) {
              right=solve(ind-2, heights) + abs(heights[ind] - heights[ind-2]);
       }

       return dp[ind] = min(right, left);

}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here

    vector<int>dp(n+1, -1);

    int ans = solve(n, heights, dp);
    return ans;

}