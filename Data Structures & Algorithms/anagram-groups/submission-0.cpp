class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(int i=0; i<strs.size();i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            res[key].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto [key, words] : res){
            result.push_back(words);
        }
        return result;
    }
};
