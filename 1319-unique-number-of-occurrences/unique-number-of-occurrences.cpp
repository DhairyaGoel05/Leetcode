class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int &nums: arr){
            mp[nums]++;
        }
        set<int> st;
        for(auto it: mp){
            int freq=it.second;
            if(st.find(freq)!=st.end()){
                return false;
            }
            st.insert(freq);
        }            
        return true;

    }
};