class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int &num : nums){
            m[num]++;
        }
        for(auto num: m){
            if(num.second>1) return true;
        }
        return  false;
    }
};