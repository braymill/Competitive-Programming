class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        int numEmpty = total;
        while (numEmpty >= numExchange){
            numEmpty -= numExchange;
            numEmpty++;
            total++;
        }
        return total;
    }
};