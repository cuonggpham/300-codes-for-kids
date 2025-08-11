class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr =0, maxx=0;
        for(int i=0; i<k; i++){
            curr += nums[i];
        }
        maxx = curr;
        for(int i=k; i<nums.size(); i++){
            curr += nums[i] - nums[i-k];
            if(curr >= maxx){
                maxx = curr;
            }
        }
        return maxx/k;
    }
};