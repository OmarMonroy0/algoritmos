class Solution {
public:
    vector < string > SplitWords(const string &s){
        string one = "",two = "";
        int i  = 0;
        for (; i < s.size(); i ++){
            if (s[ i ] == '@') break;
            one += s [ i ];
        }
        for ( ; i < s.size(); i++)
            two += s [ i ];
        return {one,two};
    }
    string ManageString(const string &s){
        string res = "";
        for (char c : s){
            if (c == '.') continue;
            if (c == '+') break;
            res += c;
        }
        return res;
    }
    int numUniqueEmails(vector<string>& emails) {
        set < string > se;
        for (string s : emails){
            vector < string > split = SplitWords(s);
            string manageString = ManageString(split [ 0 ]);
            manageString += ('@' + split [ 1 ]);
            
            se.insert (manageString);
        }
        return (se.size());
    }
};