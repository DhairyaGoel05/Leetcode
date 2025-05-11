class Solution {
    public int minSwaps(String s) {
        Stack<Character> st=new Stack<>();
        int open=0;
        int close=0;
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(ch=='['){
                // st.push(ch);
                open++;
            }else{
                // if(st.isEmpty() || st.peek()==']'){
                if(open<=0){    
                    // st.push(ch);
                    close++;
                }else{
                    // st.pop();
                    open--;
                }
            }
        }
        // int totalBrackets=st.size();
        // int closedBrackets=totalBrackets/2;
        return ((close+1)/2);
    }
}