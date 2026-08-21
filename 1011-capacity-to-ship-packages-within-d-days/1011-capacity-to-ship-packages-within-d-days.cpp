class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int current = 0;
        int usedDays = 1;

        for (int w : weights) {
            if (current + w > capacity) {
                usedDays++;
                current = 0;
            }

            current += w;
        }

        return usedDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canShip(weights, days, mid))
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};