class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> counts;
        for(int i=0; i<s.length(); i++){
            counts[s[i]]++;
        }
        unordered_map<char, int> second;
        for(int j=0; j<t.length(); j++){
            second[t[j]]++;
        }
        return counts == second;
    }
};
