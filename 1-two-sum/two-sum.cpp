class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int idx1 = 0, idx2 = 0, strt = 0 , next = 0;
        vector <int> idx;
        for(int strt = 0; strt < nums.size(); strt++) {
            for (int next = strt+1; next < nums.size(); next++) {
                if(target == nums[strt] + nums[next]) {
                    idx.push_back(strt);
                    idx.push_back(next);
                }
            }
        }
        return idx;
    }
};