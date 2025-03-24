class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int mp=0;
        int bestbuy=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>bestbuy){
                mp=max(mp,arr[i]-bestbuy);
            }
            bestbuy=min(bestbuy,arr[i]);
        }
        
        return mp;
    }
};