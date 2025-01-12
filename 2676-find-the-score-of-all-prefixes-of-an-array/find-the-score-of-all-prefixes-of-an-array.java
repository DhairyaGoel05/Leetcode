class Solution {
    public long[] findPrefixScore(int[] nums) {
        long[] prefix=new long[nums.length];
        long ans=0;
        int maximum=Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            maximum=Math.max(maximum,nums[i]);
            long value=nums[i]+maximum;
            ans+=value;
            prefix[i]=ans;
        }
        return prefix;
    }
}