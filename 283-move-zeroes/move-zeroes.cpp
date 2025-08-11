class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=0;
        for(int b=0; b<nums.size(); b++){
            if(nums[b] != 0){
                swap(nums[a], nums[b]);
                a++;
            }
        }
    }
};