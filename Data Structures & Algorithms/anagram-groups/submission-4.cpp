class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> str_map;
        for(auto&s:strs){
            string sort_s=s;
            sort(sort_s.begin(),sort_s.end());
            str_map[sort_s].push_back(s);
            }
        vector<vector<string>> result;
        for(auto mp:str_map){
            result.push_back(mp.second);
        }
        return result;
    }
};
