class Solution {
public:
    long long sum=0;
    vector<int> comb;
    vector<vector<int>> res;

    void Try(int k, vector<int>& candidates, int target){
        for(int i=k; i<candidates.size(); i++){
            int val = candidates[i];
            if(sum+val <= target){
                comb.push_back(val);
                sum += val;          
                if(sum == target){
                    res.push_back(comb);
                }
                else{
                    Try(i, candidates, target);
                }
                sum -= val;
                comb.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        Try(0, candidates, target);
        return res;
    }
};