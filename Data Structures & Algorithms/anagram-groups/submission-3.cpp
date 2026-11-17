class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<int,vector<pair<char,int>>> vec_mp;//第一个值是原先在strs的索引
        map<vector<pair<char,int>>,vector<string>> str_mp;
        vector<vector<string>> vec_str;
        for(int i=0;i<strs.size();i++){
            map<char,int> mp;
            for(int j=0;j<strs[i].length();j++){
                mp[strs[i][j]]++;
            }
            vector<pair<char,int>> v;
            for(auto p:mp){
                v.emplace_back(p.first,p.second);
            }
            vec_mp.insert({i,v});
        }
        for(auto mp:vec_mp){
            str_mp[mp.second].push_back(strs[mp.first]);
        }
        for(auto mp:str_mp){
            vec_str.push_back(mp.second);
        }
        return vec_str;
    }
};
