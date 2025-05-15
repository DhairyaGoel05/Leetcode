class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        int n=sizeof(nums)/sizeof(int);
        for(int i : nums){
            res=res^i;
        }
        return res;
    }
};