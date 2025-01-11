class Solution {
    public int tribonacci(int n) {
       int[] dp=new int[n+1];
       return tribonacciSeries(n,dp);
    }
    public int tribonacciSeries(int n,int[] dp){
         if(n<=1){
            return n;
        }
        if(n==2){
            return 1;
        }
        if(dp[n]!=0) return dp[n];
        int ans=tribonacciSeries(n-3,dp)+tribonacciSeries(n-2,dp)+tribonacciSeries(n-1,dp);
        dp[n]=ans;
        return ans;
    }
}