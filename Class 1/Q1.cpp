class Solution {
    public:
        int numIdenticalPairs(vector<int>& nums) {
            int n = nums.size();
            int ans = 0;
            int freq[101] = {0};
     
            for(int i = 0; i < n; i++){
             ans += freq[nums[i]];
             freq[nums[i]]++;
            } 
     
            return ans;
        }
    };