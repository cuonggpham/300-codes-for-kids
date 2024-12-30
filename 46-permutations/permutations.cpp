class Solution {
public:
    vector<int> visited;
    vector<int> perm;
    vector<vector<int>> res;

    bool check(int i){
        return !visited[i];
    }
    void Try(int k, vector<int>& nums){
        for(int i=0; i<nums.size(); i++){
            if(!visited[i]){
                perm.push_back(nums[i]);
                visited[i] = true;
                if(perm.size() == nums.size()){
                    res.push_back(perm);
                }
                else{
                    Try(k+1, nums);
                }
                visited[i] = false;
                perm.pop_back();

            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        visited.resize(nums.size(), false); 
        Try(1, nums);                      
        return res;  
    }
};