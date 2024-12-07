class Solution {
public:
    
    bool possible(vector<int>&nums,int maxi,int maxOp){
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%maxi==0)
            c+=(nums[i]/maxi)-1;
            else{
                c+=(nums[i]/maxi);
            }
        }
        if(c<=maxOp)
        return true;
        else
        return false;
    }
    
    int minimumSize(vector<int>& nums, int maxOperations) {
        int s=1;
        int e=*max_element(nums.begin(),nums.end());
        int result;

        while(s<=e){
            int mid=(s+e)/2;
            if(possible(nums,mid,maxOperations)){
                result=mid;
                e=mid-1;
            }else
            s=mid+1;

        }
        return result;
    }
};