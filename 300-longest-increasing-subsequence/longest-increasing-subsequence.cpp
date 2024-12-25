class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> F(n, 1);
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i] > nums[j]){
                    F[i] = max(F[i], F[j]+1);
                }
            }
            cout << F[i] << " ";
        }
        return *max_element(F.begin(), F.end());
    }
};