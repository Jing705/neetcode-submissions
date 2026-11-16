class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int left=0;
        int right=nums.size()-1;
        multimap<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash.insert({nums[i],i});
        }
        sort(nums.begin(),nums.end());
        while(left<right){
            if(nums[left]+nums[right]<target) left++;
            else if(nums[left]+nums[right]==target){
                break;
            }
            else right--;
        }
        int index=0;
        int l=0;
        int r=0;
        for(auto&h:hash){
            if(index==left) l=h.second;
            if(index==right) r=h.second;
            index++;
        }
        if(l<r){
            v.push_back(l);
            v.push_back(r);
        }
        else{
            v.push_back(r);
            v.push_back(l);
        }
        return v;
    }
};