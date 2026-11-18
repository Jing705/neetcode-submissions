class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;//第一个是数值 第二个是次数
        for(auto&n:nums){
            mp[n]++;
        }
        vector<pair<int,int>> vec;
        for(auto&p:mp){
            vec.push_back({p.second,p.first});
        }
        sort(vec.begin(),vec.end(),greater<pair<int,int>>());
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(vec[i].second);
        }
        return result;
    }
};
