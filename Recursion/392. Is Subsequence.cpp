class Solution {
public:
    int solve(string s,string t,int i, int j){
          if (i == s.length()) {
            return 0;  // All characters of s have been found
        }
        if (j == t.length()) {
            return 0;  // Reached end of t
        }
        
        if(s[i] == t[j]){
            return 1 + solve(s,t,i+1,j+1);
        }
        else{
            return solve(s,t,i,j+1);
        }
    }
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        int ans = solve(s,t,i,j);
        if(ans == s.length()){
            return true;
        }
        else{
            return false;
        }
    }
};
