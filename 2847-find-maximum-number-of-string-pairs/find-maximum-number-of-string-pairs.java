class Solution {
    public int maximumNumberOfStringPairs(String[] words) {
        int count=0;
        HashSet<String> st=new HashSet<>();
        for(int i=0;i<words.length;i++){
            String rev=reverse(words[i]);
            if(st.contains(rev)){
                count++;
            }
            else{
                st.add(words[i]);
            }
        }
        return count;
    }
    public String reverse(String s){
        StringBuilder st=new StringBuilder(s);
        st.reverse();
        return st.toString();
    }
}