class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        unordered_map<char, int> roman_map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int total = 0;
        for(int i = 0; i < n-1; i++) {
            if(roman_map[s[i]] >= roman_map[s[i+1]]) {
                total += roman_map[s[i]];
            }
            else {
                total -= roman_map[s[i]]; 
            }
        }
        return total + roman_map[s[n-1]];
    }
};