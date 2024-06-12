class Solution {
public:
    int lengthOfLastWord(const string &s) {
        int i  = s.size() - 1;
        int cont  = 0;
        while ( i >= 0 and s[i] == ' ') i --;
        while ( i>= 0 and s[i] != ' '){
            i --;
            cont ++;
        }
        return cont;
    }
};