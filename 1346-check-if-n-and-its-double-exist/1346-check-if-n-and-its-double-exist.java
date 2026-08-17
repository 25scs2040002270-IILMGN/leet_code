class Solution {
    public boolean checkIfExist(int[] arr) {
         HashSet<Integer> set = new HashSet<>();

        for (int x : arr) {

            // Check if 2*x already exists
            if (set.contains(2 * x)) {
                return true;
            }

            // Check if x is double of an existing number
            if (x % 2 == 0 && set.contains(x / 2)) {
                return true;
            }

            set.add(x);
        }

        return false;
    }
    
}