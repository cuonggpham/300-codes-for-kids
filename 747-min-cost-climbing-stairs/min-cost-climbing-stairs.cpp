class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int F[1001]={0};
        F[0] = cost[0];
        F[1] = cost[1];
        for(int i=2; i<n; i++){
            F[i] = min(F[i-1] + cost[i], F[i-2]+cost[i]);
        }
        return min(F[n-1], F[n-2]);
    }
};