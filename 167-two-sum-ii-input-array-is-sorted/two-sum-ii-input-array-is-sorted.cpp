class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p1=0;
        int p2=numbers.size()-1;
        
        while(p1 < p2){
            int total = numbers[p1] + numbers[p2];
            if(total == target){
                return {p1+1, p2+1};
            }
            else if(total > target){
                p2--;
            }
            else{
                p1++;
            }
        }
        return {-1, -1};
    }
};