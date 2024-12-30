class Solution {
public:
    vector<int> comb;
    vector<vector<int>> res;

    void Try(int u, int n, int k){
        for(int i=u; i<=n; i++){
            comb.push_back(i);
            if(comb.size() == k){
                res.push_back(comb);
            }
            else{
                Try(i+1, n, k);
            }
            comb.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        Try(1, n, k);
        return res;
    }
};