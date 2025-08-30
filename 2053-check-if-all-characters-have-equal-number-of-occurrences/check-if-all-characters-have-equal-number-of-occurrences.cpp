class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> mp;
        for(char &num:s){
            mp[num]++;
        }
        for(auto it:mp){
            if(it.second!=mp[s[0]]){
                return false;
            }
        }
        return true;
    }
};