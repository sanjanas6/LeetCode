class Solution {
    public int mostFrequentEven(int[] nums) {
        int[] frequency = new int[100001]; 
        
        for (int num : nums) {
            if (num % 2 == 0) { 
                frequency[num]++;
            }
        }
        
        int mostFrequent = -1;
        int maxFrequency = 0;
        
       
        for (int i = 0; i < frequency.length; i += 2) { 
            if (frequency[i] > maxFrequency) {
                mostFrequent = i;
                maxFrequency = frequency[i];
            }
        }
        
        return mostFrequent;
    }
}
