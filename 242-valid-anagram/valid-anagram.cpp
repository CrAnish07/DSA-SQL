class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hashmap1;
        unordered_map<char,int> hashmap2;

        if (s.length() != t.length()) {
            return false;
        }

        for(int i = 0; i < s.length(); i++) {
            hashmap1[s[i]]++;
            hashmap2[t[i]]++;
        }

        for(const auto& pair: hashmap1) {
            char key = pair.first;
            int value = pair.second;

            auto it = hashmap2.find(key);
            if(it == hashmap2.end() || it->second != value) {
                return false;
            }
        }
        return true;
    }
};