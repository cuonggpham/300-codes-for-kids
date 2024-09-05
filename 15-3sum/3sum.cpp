class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> se;
        sort(nums.begin(), nums.end());

        for(int i=0; i<=n; i++){
            int j = i+1;
            int k = nums.size()-1;
            vector<int> tmp;

            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                
                if(sum == 0){
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(nums[k]);
                    se.insert(tmp);
                    tmp.clear();
                    j++;
                    k--;
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        vector<vector<int>> ans(se.begin(), se.end());
        return ans;
    }
};