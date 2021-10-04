class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum=nums[0];
        int n =nums.size();
        int max_sub=nums[0];
        for(int i=1;i<n;i++)
        {
            if(curr_sum<0)
            {
                curr_sum=0;
            }
            curr_sum+=nums[i];
            max_sub=max(max_sub, curr_sum);
            
        }
        return max_sub;
    }
};
