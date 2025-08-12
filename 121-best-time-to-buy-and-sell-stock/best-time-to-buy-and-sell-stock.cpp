class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int maxx=0;
        for(int j=1; j<prices.size(); j++){
            int curr = prices[j]-prices[i];
            if(prices[i]<prices[j]){
                maxx = max(curr, maxx);
            }
            else i=j;
        }
        return maxx;
    }
};