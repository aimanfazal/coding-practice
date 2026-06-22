class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int count = 0;
        int sum = 0;
        
        for (int i = 1; p > sum; i++)
        {
            sum += i*i;
            if (p < sum)
            break;
            count++;
        }
        
        return count;
    }
};
