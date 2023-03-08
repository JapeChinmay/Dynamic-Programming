#include<bits/stdc++.h>

using  namespace std;


int minCost(vector<int>& cost, int n, vector<int>& dp ) {
       if(n==1) return cost[1];
       if(n==0)return cost[0];

       if(dp[n] != -1) return dp[n];


       dp[n]= min(minCost(cost, n-1, dp), minCost(cost, n-1,dp)) + cost[n];


       return dp[n];



       

}

int main () {

      
      int n  =10;

      vector<int>cost(n);
      for(int i = 0 ;i<n;i++) {
          cin>>cost[i];
      }

      vector<int>dp(n+1, -1);


      int ans = minCost(cost,n, dp);


      return 0;

}