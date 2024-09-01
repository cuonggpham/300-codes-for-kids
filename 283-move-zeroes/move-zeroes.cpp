class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1=0;
        int p2=0;
        for(int p2=0; p2<nums.size(); p2++){
            if(nums[p2] != 0){
                swap(nums[p1], nums[p2]);
                p1++;
            }
        }
    }
};