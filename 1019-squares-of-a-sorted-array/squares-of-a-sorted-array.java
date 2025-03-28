class Solution {
    public int[] sortedSquares(int[] arr) {
        for(int i=0;i<arr.length;i++){
            arr[i]=arr[i]*arr[i];
        }
        int ans[]=new int[arr.length];
        int i=0;
        int j=arr.length-1;
        int p=arr.length-1;
        
        while(i<=j){
            if(arr[i]>=arr[j]){
                ans[p]=arr[i];
                i++;
            }else{
                ans[p]=arr[j];
                j--;
            }
            p--;
        }
        return ans;
        
    }
}