class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> F(n, 1);
        vector<int> cnt(n, 1);
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j]){ 
                    if(F[j]+1>F[i]){
                        F[i] = F[j]+1;
                        cnt[i]=0;
                    }
                    if(F[i] == F[j]+1){
                        cnt[i] += cnt[j];
                    } 
                }
            } 
            cout << F[i] << " "; 
        }
        int res=0, maxlength=0;
        maxlength = *max_element(F.begin(), F.end());
        for(int i=0; i<n; i++){
            if(F[i] == maxlength){
                res+= cnt[i];
            }
        }
        return res;
    }
};