class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        vector<int> result;
        for(int num:nums){
            mp[num]++;
        }
        for(auto i:mp){
            if(i.second==2){
                result.push_back(i.first);
            }
        }
        return result;
    }
};