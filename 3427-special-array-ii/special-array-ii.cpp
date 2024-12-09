class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool>ans;
        unordered_set<int>check;
        for(int i=1;i<nums.size();i++){
            if((nums[i]%2==0&&nums[i-1]%2==0)||(nums[i]%2==1&&nums[i-1]%2==1)){
                check.insert(i);
                //check.insert(i+1);
            }
        }
        for(int i=0;i<queries.size();i++){
            int f=0;
             for(auto it:check){
                if(it>queries[i][0]&&it<=queries[i][1]){
                    f=1;
                    ans.push_back(false);
                    break;
                }
             }
           
            
            if(f==0)
            ans.push_back(true);
        }
        return ans;
    }
};