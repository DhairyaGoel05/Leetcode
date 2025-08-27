class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int result=0;
        for(char &ch : s){
            if(ch=='('){
                count++;
                if(result<=count){
                    result=count;
                }
            }else if(ch==')'){
                count--;
            }
        }
        return result;
    }
};