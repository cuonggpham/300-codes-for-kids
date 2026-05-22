class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int chaien = 0;
        for(int candy : candies){
            chaien = Math.max(candy, chaien);
        }
        List<Boolean> res = new ArrayList<>();

        for (int candy : candies){
            if(candy + extraCandies >= chaien){
                res.add(true);
            }
            else res.add(false);
        }
        return res;
    }
}