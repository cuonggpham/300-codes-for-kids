class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int tmp[n];
        for(int i=0; i<nums.size(); i++){
            tmp[(i+k)%n] = nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            nums[i]=tmp[i];
        }
    }
};