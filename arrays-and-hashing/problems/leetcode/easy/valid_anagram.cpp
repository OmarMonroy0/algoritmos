class Solution {
public:
    bool isAnagram(const string &s, const string &t) {
        vector < int > alph_s(26,0),alph_t(26,0);

        for (const char &c: s)
            alph_s [ c - 'a']++;
        for (const char &c : t)
            alph_t [ c - 'a'] ++;
        return alph_t == alph_s;
    }
};