class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l=0;
        int sum=0;
        int minn = 1e9+1;
        for(int r=0; r<n; r++){
            sum += nums[r];
            while(sum >= target){
                minn = min(minn, r-l+1);
                sum -= nums[l];
                l++;
            }
        }
        if(minn == 1e9+1) return 0;
        else return minn;
    }
};