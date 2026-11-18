class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp;
        for(auto&n:nums){
            mp.insert(n);
        }
        int max_count=0;
        for(int i=0;i<nums.size();i++){
            int x=0;
            int count=0;
            while(!mp.count(nums[i]-1)){
                if(mp.count(nums[i]+x)){
                    x=x+1;
                    count++;
                }
                else break;
            }
            max_count=max(count,max_count);
        }
        return max_count;
    }
};
