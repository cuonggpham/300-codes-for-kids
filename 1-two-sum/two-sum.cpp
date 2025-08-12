class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> M;
        for(int i=0; i<nums.size(); i++){
            M[nums[i]] = i;
        }

        for(int i=0; i<nums.size(); i++){
            int m = target- nums[i];
            if(M.count(m) && M[m] != i){
                return {i, M[m]};
            }
        }
        return {};
    }
};