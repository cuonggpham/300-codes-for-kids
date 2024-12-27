class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        vector<int> F(n);
        int maxx = 0; 
        int prev = values[0];
        F[0] = 0;
        for(int i=1; i<n; i++){
            F[i] = prev + values[i] - i;
            prev = max(prev, values[i] + i);
        }
        return *max_element(F.begin(), F.end());
    }
};