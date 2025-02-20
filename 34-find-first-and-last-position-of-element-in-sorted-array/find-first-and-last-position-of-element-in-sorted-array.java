class Solution {
    public int[] searchRange(int[] nums, int target) {
        int arr[] =new int[2];
        int first=binary(nums,target,true);
        arr[0]=first;
        int last=binary(nums,target,false);
        arr[1]=last;
        return arr;
    }
    public static int binary(int arr[],int target,boolean isFirst){
        int ans=-1;
        int start=0;
        int end=arr.length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target){
                ans=mid;
                if(isFirst){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            else if(arr[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }

}