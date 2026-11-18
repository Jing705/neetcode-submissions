class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum=1;
        int num_zero=0;
        int pos_zero=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            if(n!=0) sum*=n;
            else{
                num_zero++;
                pos_zero=i;
            }
        }
        vector<int> vec;
        if(num_zero==0){
            for(auto&n:nums){
                vec.push_back(sum/n);
            }
        }
        else if(num_zero==1){
            for(int i=0;i<nums.size();i++){
                if(i==pos_zero) vec.push_back(sum);
                else vec.push_back(0);
            }
        }
        else{
            for(int i=0;i<nums.size();i++){
                vec.push_back(0);
            }
        }
        return vec;
    }
};
