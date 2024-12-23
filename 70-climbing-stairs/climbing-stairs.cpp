class Solution {
public:
    int climbStairs(int n) {
        int F[100];
        F[1]=1;
        F[2]=2;
        for(int i=3; i<=n; i++){
            F[i] = F[i-1]+F[i-2];
        }
        return F[n];
    }
};