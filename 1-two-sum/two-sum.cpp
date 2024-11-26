class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        // return ans;
       
        
        
        // sort(nums.begin(),nums.end());
        // int l=0;
        // int r=nums.size()-1;
        // while(l<r){
        //     if(nums[l]+nums[r]==target){
        //         return {nums[l],nums[r]};
        //     }else if(nums[l]+nums[r]<target)
        //     l++;
        //     else
        //     r--;
        // }
        return {-1,-1};
    }
};