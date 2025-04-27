class Solution {
    public:
        int largestAltitude(vector<int>& gain) {
            int sum = 0;
            int n = gain.size();
            vector<int> ans_arr(n, 0);
            ans_arr[0] = gain[0];
    
            for(int i = 1; i < n; i++){
                ans_arr[i] = ans_arr[i - 1] + gain[i];
            }
    
            for(int i = 0; i < n; i++){
                if(sum < ans_arr[i]){
                  sum = ans_arr[i];  
                }
            }
    
            return sum;
        }
    };